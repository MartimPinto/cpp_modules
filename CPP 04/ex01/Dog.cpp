/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:53 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:23:27 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();

}

Dog::Dog(const Dog &src): Animal(src)
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

Brain *Dog::getBrain() const 
{
	return (this->_brain);
}
