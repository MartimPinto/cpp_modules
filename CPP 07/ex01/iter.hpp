/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:39 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/08 16:53:02 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

template <typename T> void printElement(T& element)
{
	std::cout << element << std::endl;
}

template <typename T, typename U> void iter(T* arr, size_t n, void(*f)(U&))
{
	for (size_t i = 0; i < n; i++)
		f(arr[i]);
}





#endif /* ************************************************* SCALARCONVERTER_H */