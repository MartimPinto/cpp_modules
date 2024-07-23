/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:37:17 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 13:56:04 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void CheckParams(int argc, char **argv)
{
	if (argc < 2 || !argv[1][0])
	{
		std::cerr << "Error" << std::endl;
		exit(1);
	}
	std::string params = argv[1];
	if(params.find_first_not_of("0123456789+-/* ") != std::string::npos)
	{
		std::cerr << "Error" << std::endl;
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	RPN a;
	CheckParams(argc, argv);

	try
	{
		std::cout << a.calculate(argv[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}