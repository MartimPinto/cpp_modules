/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:12:39 by martimpinto       #+#    #+#             */
/*   Updated: 2024/07/03 17:49:00 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T> void iter(T& arr, size_t n, void(*f)(T& arg))
{
	for (size_t i = 0; i < n)
		f(arr[i]);
}





#endif /* ************************************************* SCALARCONVERTER_H */