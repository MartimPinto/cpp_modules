/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/02/12 15:41:10 by martimpinto      ###   ########.fr       */
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
	std::string level;
	Harl harl;
	
	if (argc != 2)
		usage();
	level = argv[1];
	harl.complain(level);
	return (0);
}
