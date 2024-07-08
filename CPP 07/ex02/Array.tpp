/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 14:33:32 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/08 16:15:51 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
#include <iostream>

template <typename T> Array<T>::Array(): _arr(new T[0]), _len(0) {}

template <typename T> Array<T>::Array(unsigned int n): _arr(NULL), _len(n) 
{
	_arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		_arr[i] = T();
}

template <typename T> Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T> Array<T>::Array(const Array<T> &src): _arr(NULL)
{
	this->_len = src.size();
	this->_arr = new T[_len];
	for (int i = 0; i < _len; i++)
		this->_arr[i] = src._arr[i];
}

template <typename T>Array<T> &Array<T>::operator=(const Array<T> &src)
{
	if (this->_arr)
		delete[] _arr;
	this->_len = src.size();
	this->_arr = new T[_len];
	for (int i = 0; i < _len; i++)
		this->_arr[i] = src._arr[i];
	return (*this);
	
}
template <typename T>T& Array<T>::operator[](int index)
{
	if (index >= this->size() || index < 0)
		throw std::out_of_range("index out of range");
	return (_arr[index]);
}

template <typename T>int Array<T>::size(void) const
{
	return this->_len;
}