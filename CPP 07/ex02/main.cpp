/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:01:45 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/08 14:21:12 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"

int main()
{
	std::cout << RED << "#----- INITIALIZE TEST -----#" << RESET << std::endl;
	Array<int> iarr(3);
	Array<char> carr(3);
	Array<int> empty;
	char letter = 'a';

	try
	{
		std::cout << GREEN << "Array of int: " << RESET;
		for(int i = 0; i < iarr.size(); i++)
		{
			iarr[i] = i;
			std::cout << iarr[i];
		}
		std::cout << std::endl;
		std::cout << GREEN << "Array of char: " << RESET;
		for (int i = 0; i < carr.size(); i++)
		{
			carr[i] = letter++;
			std::cout << carr[i];
		}
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << RED << "#----- [] Operator TEST -----#" << RESET << std::endl;
	try
	{
		std::cout << iarr[2] << std::endl;
		std::cout << carr[0] << std::endl;
		std::cout << iarr[6] << std::endl;
		//std::cout << empty[0] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}