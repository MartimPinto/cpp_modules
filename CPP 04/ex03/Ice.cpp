/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:30:45 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 15:33:56 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &src): AMateria(src._type)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	std::cout << "ice copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	Ice *clone = new Ice;
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}