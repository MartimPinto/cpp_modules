/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:07:23 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 17:19:54 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	this->stored = 0;
	for (int i = 0; i < 4; i++)
	{
		this->storage[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = src;
}
MateriaSource& MateriaSource::operator=(const MateriaSource &copy)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->stored = copy.stored;
	for (int i = 0; i < 4; i++)
	{
		if (this->storage[i])
			delete this->storage[i];
		this->storage[i] = copy.storage[i];	
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->storage[i])
			delete this->storage[i];
	}
}