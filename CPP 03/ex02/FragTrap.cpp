/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:49:57 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/16 15:29:43 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " built!" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->_health = src._health;
    this->_energy = src._energy;
    this->_attackDamage = src._attackDamage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->_health = copy._health;
    this->_energy = copy._energy;
    this->_attackDamage = copy._attackDamage;
	return (*this);
}

void    FragTrap::highFiveGuys(void) 
{
    std::cout << "FragTrap " << _name << " asks for a high five" << std::endl;
}