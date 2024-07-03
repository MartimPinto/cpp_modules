/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 16:42:32 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/03 14:55:28 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	Base	*test;
	Base	*emptyPtr = NULL;

	std::cout << RED << "## IDENTIFY TEST ##" << RESET << std::endl;
	std::cout << std::endl;
	test = generate();
	identify(test);
	identify(*test);
	delete test;
	std::cout << std::endl;
	std::cout << RED << "## EMPTY TEST ##" << RESET << std::endl;
	std::cout << std::endl;
	identify(emptyPtr);
	identify(*emptyPtr);
	delete emptyPtr;

	return (0);
}