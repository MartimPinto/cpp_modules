/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:32:58 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/17 15:33:19 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(): _max(0) 
{
}

Span::Span(unsigned int n): _max(n)
{
}

Span::Span(const Span &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs)
{
	if ( this != &rhs )
	{
		this->_max = rhs._max;
		this->_cont = rhs._cont;
	}
	return *this;
}

std::ostream&	operator<<( std::ostream &o, Span const &i)
{
	 for (std::vector<int>::const_iterator it = i.getVector()->begin(); it != i.getVector()->end(); ++it)
        o << *it << " ";
    return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int generateRand()
{
	return (rand() % RAND_MAX);
}

void Span::addRange()
{
	this->_cont.resize(this->_max);
	std::generate(_cont.begin(), _cont.end(), &generateRand);
}

void Span::addNumber(int i)
{
	if (this->_cont.size() == this->_max)
		throw ContainerFilled();
	_cont.push_back(i);
}

int Span::longestSpan()
{
	if (this->_cont.size() < 2)
		throw SpanException();
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	max = std::max_element(_cont.begin(), _cont.end());
	min = std::min_element(_cont.begin(), _cont.end());
	return(abs(*max - *min));
}

int Span::shortestSpan()
{
	if (this->_cont.size() < 2)
		throw SpanException();
	std::vector<int>::iterator it = _cont.begin();
	std::vector<int>::iterator ite = _cont.end();
	std::sort(it, ite);
	int span = std::numeric_limits<int>::max();
	while (it != ite - 1)
	{
		if(abs(*it - *(it + 1)) < span)
			span = abs(*it - *(it + 1));
		++it;
	}
	return (span);
}


const char *Span::ContainerFilled::what() const throw()
{
	return ("Can't add more. Container is full\n");
}

const char *Span::SpanException::what() const throw()
{
	return ("Insufficient number of elements for that operation\n");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::vector<int> *Span::getVector() const
{
	return &_cont;
}


/* ************************************************************************** */