/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:32:58 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/11 17:08:41 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
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
	 for ( std::vector<int>::const_iterator it = i.getVector()->begin(); it != i.getVector()->end(); ++it )
        o << *it << " ";
    return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int i)
{
	if (this->_cont.size() == this->_max)
		throw ContainerFilled();
	_cont.push_back(i);
}


void Span::addNumbers(std::vector<int>::const_iterator it, std::vector<int>::const_iterator ite)
{
	if (this->_cont.size() == this->_max)
		throw ContainerFilled();
	_cont.insert(_cont.end(), it, ite);
}



const char *Span::ContainerFilled::what() const throw()
{
	return ("Can't add more. Container is full\n");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::vector<int> *Span::getVector() const
{
	return &_cont;
}


/* ************************************************************************** */