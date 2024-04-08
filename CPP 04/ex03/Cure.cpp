/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:30:45 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 15:37:20 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &src): AMateria(src._type)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure;
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}