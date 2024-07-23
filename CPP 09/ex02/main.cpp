/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:44:32 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 17:17:30 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void CheckParams(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cerr << "Error" << std::endl;
		exit(1);
	}
	for (int i = 1; argv[i]; ++i)
	{
		if(std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
		{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
}

int main(int argc, char **argv)
{
	
	CheckParams(argc, argv);

	PmergeMe a;
	for (int i = 1; argv[i]; ++i) 
	{
		a.getVector()->push_back(atoi(argv[i]));
		a.getDeque()->push_back(atoi(argv[i]));
	}
	printElements(*a.getVector(), "Vector");
	printElements(*a.getDeque(), "Deque");
	
}