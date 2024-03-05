/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:53 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 15:32:04 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();

}

Dog::Dog(const Dog &src): AAnimal(src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_brain = NULL;
	*this = src;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return (*this);
	this->type = copy.type;
	delete this->_brain;
	this->_brain = new Brain (*copy._brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog: Woof!" << std::endl; 
}

