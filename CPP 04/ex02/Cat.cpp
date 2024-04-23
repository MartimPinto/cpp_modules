/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:53 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:34:33 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();

}

Cat::Cat(const Cat &src): AAnimal(src)
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
	delete this->_brain;
	this->type = copy.type;
	this->_brain = new Brain (*copy._brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat: Meow!" << std::endl; 
}

Brain *Cat::getBrain() const 
{
	return (this->_brain);
}