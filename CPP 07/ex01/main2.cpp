/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:39:44 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/08 16:59:06 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void up(char &c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
}

void sub1(int &i)
{
	i = i - 1;
}

int main()
{
	char arr1[5] = {'a', 'b', 'c', 'd', 'e'};
	int arr2[3] = {1, 2, 3};
	
	size_t size1 = sizeof(arr1) / sizeof(arr1[0]);
	size_t size2 = sizeof(arr2) / sizeof(arr2[0]);

	std::cout << RED << "#----- CHAR TEST -----#" << RESET << std::endl;
	std::cout << GREEN << "Original array: " << RESET << std::endl;
	iter(arr1, size1, printElement<char>);
	std::cout << std::endl;
	iter(arr1, size1, up);
	std::cout << GREEN << "Array after up function called by iter: " << RESET << std::endl;
	iter(arr1, size1, printElement<char>);
	std::cout << std::endl;
	std::cout << RED << "#----- INT TEST -----#" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << GREEN << "Original array: " << RESET << std::endl;
	iter(arr2, size2, printElement<int>);
	std::cout << std::endl;
	iter(arr2, size2, sub1);
	std::cout << GREEN << "Array after sub1 function called by iter: " << RESET << std::endl;
	iter(arr2, size2, printElement<int>);

	return 0;
}