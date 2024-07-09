/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:18:08 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/09 15:43:24 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.tpp"

int main()
{
	srand(time(0));
	std::vector<int> vct;
	std::list<int> lst;
	int	toFind;
	try
	{
		std::cout << RED << "#----- VECTOR TEST -----#" << RESET << std::endl;
		fillContainer(vct);
		displayContainer(vct);
		toFind = rand() % 7;
		std::cout << GREEN << "To Find: " << RESET << toFind << std::endl;
		int index = easyfind(vct, toFind);
		std::cout << GREEN << "Found " << toFind << " at index " << index << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET;
	}
	try
	{
		std::cout << RED << "#----- LIST TEST -----#" << RESET << std::endl;
		fillContainer(lst);
		displayContainer(lst);
		toFind = rand() % 7;
		std::cout << GREEN << "To Find: " << RESET << toFind << std::endl;
		int index = easyfind(lst, toFind);
		std::cout << GREEN << "Found " << toFind << " at index " << index << RESET << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << RESET;
	}
	
}