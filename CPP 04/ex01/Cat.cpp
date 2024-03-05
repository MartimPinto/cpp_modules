/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:53 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 14:46:28 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src): Animal(src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_brain = NULL;
	*this = src;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	delete this->_brain;
	this->_brain = new Brain(*copy._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow!" << std::endl; 
}

