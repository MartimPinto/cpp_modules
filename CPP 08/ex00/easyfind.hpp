/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:51:30 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/11 14:49:08 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
#include <cstdlib>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

template <typename T> int easyfind(const T& cont, int n);

template <typename T> void displayContainer(T& cont);

template <typename T> void fillContainer(T& cont);

void printInt(int i);

class NotFoundException: public std::exception
{
	public:
			virtual const char *what() const throw();
};


#endif