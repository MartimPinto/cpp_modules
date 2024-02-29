/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:29:48 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/29 12:45:59 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "default";
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal makes a sound!" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

