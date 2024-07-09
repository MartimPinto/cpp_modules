/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:33:03 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/09 15:44:47 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void printInt(int i)
{
	std::cout << i << " ";
}

template <typename T> int easyfind(const T& cont, int n)
{
	typename T::const_iterator it;
	it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw NotFoundException();
	return (std::distance(cont.begin(), it));
}

template <typename T> void fillContainer(T& cont)
{
	for (int i = 0; i < 10; i++)
	{
		int nb = rand() % 10;
		cont.push_back(nb);
	}
}

template <typename T> void displayContainer(T& cont)
{
	std::cout << GREEN << "Container elements: " << RESET;
	std::for_each(cont.begin(), cont.end(), printInt);
	std::cout << std::endl;
}

const char *NotFoundException::what() const throw()
{
	return ("Value not found in container\n");	
}