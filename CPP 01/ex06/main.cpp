/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/01 16:57:08 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void usage(void)
{
	std::cout << BLUE << "Usage: ./harl  LEVEL" << RESET << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	Harl harl;
	int	index = -1;
	
	if (argc != 2)
		usage();
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (levels[i] == argv[1])
			index = i;
	std::cout << std::endl;
	switch (index)
	{
	
		default:
				std::cout <<  "[ Probably complaining about insignificant problems ]" << std::endl;
				std::cout << std::endl;
				break;
		case 0:
				std::cout << GREEN << "[DEBUG]" << RESET << std::endl;
				harl.complain("DEBUG");
				std::cout << std::endl;
		case 1:
				std::cout << GREEN << "[INFO]" << RESET << std::endl;
				harl.complain("INFO");
				std::cout << std::endl;
		case 2:
				std::cout << GREEN << "[WARNING]" << RESET << std::endl;
				harl.complain("WARNING");
				std::cout << std::endl;
		case 3:
				std::cout << GREEN << "[ERROR]" << RESET << std::endl;
				harl.complain("ERROR");
				std::cout << std::endl;
	}
	return (0);
}
