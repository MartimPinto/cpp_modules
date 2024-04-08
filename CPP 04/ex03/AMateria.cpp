/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:06:02 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 14:17:49 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor with type called" << std::endl;
	setType(type);
	
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	this->setType(src.getType());
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}


std::string const &AMateria::getType() const 
{
	return(this->_type);
}

void AMateria::setType(std::string const &type) 
{
    this->_type = type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;	
}