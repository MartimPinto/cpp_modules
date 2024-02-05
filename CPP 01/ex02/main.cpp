/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/02/05 16:58:00 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define RESET	"\033[0m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"

int	main (void)
{
	std::string		var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << YELLOW << "\n\t---- Address ----\n" << RESET << std::endl;

	std::cout << GREEN << "Memory address of string: " << RESET << &var << std::endl;
	std::cout << GREEN << "Memory address held by pointer: " << RESET << stringPTR << std::endl;
	std::cout << GREEN << "Memory address held by reference: " << RESET << &stringREF << std::endl;

	std::cout << YELLOW << "\n\t---- Value ----\n" << RESET << std::endl;

	std::cout << GREEN << "Value of string: " << RESET << var << std::endl;
	std::cout << GREEN << "Value pointed to by pointer: " << RESET << *stringPTR << std::endl;
	std::cout << GREEN << "Value pointed to by reference: " << RESET << stringREF << std::endl;
	std::cout << std::endl;
}
