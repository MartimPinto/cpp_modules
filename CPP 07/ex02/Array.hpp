/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:11:50 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/05 16:40:35 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

template <typename T> class Array
{
	private:
		T* _arr;
		int _len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &src);
		Array &operator=(const Array<T> &src);
		~Array();
		T& operator[](int index);

		int size(void) const;

	
};



# endif 