/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:57:09 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/25 15:17:22 by martimpinto      ###   ########.fr       */
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

/*
** --------------------------------- METHODS ----------------------------------
*/

std::vector<int> PmergeMe::insertVector(std::vector<int> &left, std::vector<int> &right, std::vector<int> &vec)
{
	size_t l = 0;
	size_t r = 0;
	
	while (l < left.size() && r < right.size())
    {
        if (left[l] <= right[r])
        {
            vec.push_back(left[l]);
            l++;
        }
        else
        {
            vec.push_back(right[r]);
            r++;
        }
    }
    while (l < left.size())
    {
        vec.push_back(left[l]);
        l++;
    }
    while (r < right.size())
    {
        vec.push_back(right[r]);
        r++;
    }
	return vec;
	
}

void PmergeMe::sortVector(std::vector<int> &vec)
{
	int size = vec.size();
	std::vector<int> right;
	std::vector<int> left;
	std::vector<int> sorted;

	if (size <= 1)
		return ;
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			left.push_back(vec[i]);
		else
			right.push_back(vec[i]);
	}
	sortVector(left);
	sortVector(right);
	vec = insertVector(left, right, sorted);
}

std::deque<int> PmergeMe::insertDeque(std::deque<int> &left, std::deque<int> &right, std::deque<int> &deq)
{
	size_t l = 0;
	size_t r = 0;
	
	while (l < left.size() && r < right.size())
    {
        if (left[l] <= right[r])
        {
            deq.push_back(left[l]);
            l++;
        }
        else
        {
            deq.push_back(right[r]);
            r++;
        }
    }
    while (l < left.size())
    {
        deq.push_back(left[l]);
        l++;
    }
    while (r < right.size())
    {
        deq.push_back(right[r]);
        r++;
    }
	return deq;
	
}

void PmergeMe::sortDeque(std::deque<int> &deq)
{
	int size = deq.size();
	std::deque<int> right;
	std::deque<int> left;
	std::deque<int> sort;

	if (size <= 1)
		return ;
	for (int i = 0; i < size; i++)
	{
		if (i < size / 2)
			left.push_back(deq[i]);
		else
			right.push_back(deq[i]);
	}
	sortDeque(left);
	sortDeque(right);
	deq = insertDeque(left, right, sort);
}

double PmergeMe::calculateTime(clock_t start, clock_t end)
{
	return ((double)(end - start) / CLOCKS_PER_SEC * 1000);
}

void PmergeMe::operate()
{
	double vectime;
	double deqtime;
	
	printElements(this->_vec, "Before");
	
	clock_t start_vec = clock();
	this->sortVector(this->_vec);
	clock_t end_vec = clock();
	clock_t start_deq = clock();
	this->sortDeque(this->_deq);
	clock_t end_deq = clock();
	
	vectime = calculateTime(start_vec, end_vec);
	deqtime = calculateTime(start_deq, end_deq);
	printElements(this->_deq, "After");

	std::cout << "Time to process a range of " << this->_vec.size();
	std::cout << " elements with std::vector: " << vectime << " ms" << std::endl;
	std::cout << "Time to process a range of " << this->_deq.size();
	std::cout << " elements with std::deque: " << deqtime << " ms" << std::endl;
	
	
}

/*
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