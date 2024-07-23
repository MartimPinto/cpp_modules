/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:57:09 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 17:41:30 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_deq = rhs._deq;
	}
	return *this;
}

/*std::ostream &operator<<( std::ostream &o, PmergeMe const &i)
{
	//o << "Value = " << i.getValue();
	return o;
}
*/

/*
** --------------------------------- METHODS ----------------------------------
*/


std::vector<int> *PmergeMe::sortVector(std::vector<int> &vec)
{
	int size = vec.size();
	std::vector<int> right;
	std::vector<int> left;

	if (size <= 1)
		return &vec;
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			left.push_back(vec[i]);
		else
			right.push_back(vec[i]);
	}
	sortVector(left);
	sortVector(right);
}
{
	int size = _vec.size();
	std::vector<int> right;
	std::vector<int> left;

	if (size <= 1)
		return &_vec;
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			left.push_back(_vec[i]);
		else
			right.push_back(_vec[i]);
	}
	sortVector(&left);
	sortVector(&right);
}

** --------------------------------- ACCESSOR ---------------------------------
*/
std::vector<int> *PmergeMe::getVector()
{
	return &_vec;
}

std::deque<int> *PmergeMe::getDeque()
{
	return &_deq;
}

/* ************************************************************************** */