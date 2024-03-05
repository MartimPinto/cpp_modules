/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:29:48 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 15:29:43 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor called" << std::endl;
	this->type = "default";
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &copy)
		return (*this);
	type = copy.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "AAnimal makes a sound!" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

