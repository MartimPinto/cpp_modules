/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:44:32 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/25 15:37:13 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void CheckParams(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cerr << "Error: Invalid Number of Arguments" << std::endl;
		exit(1);
	}
	for (int i = 1; argv[i]; ++i)
	{
		if(std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
		{
			std::cerr << "Error: Invalid Element" << std::endl;
			exit(1);
		}
	}
	for (int i = 1; argv[i + 1]; ++i) 
	{
		for (int j = i + 1; argv[j]; ++j) 
		{
			if (std::string(argv[i]) == std::string(argv[j])) 
			{
				std::cerr << "Error: Parameters cannot be the same" << std::endl;
				exit(1);
			}
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
	a.operate();
}