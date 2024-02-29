/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:07:59 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/21 14:47:04 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "Default";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = _name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attackDamage = FragTrap::_attackDamage;
	this->ClapTrap::_name = name + "_clap_name";
	std::cout << "DiamondTrap " << this->_name << " has been built!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = src._name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->_health = copy._health;
    this->_energy = copy._energy;
    this->_attackDamage = copy._attackDamage;
	this->ClapTrap::_name = copy.ClapTrap::_name;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << _name << " but also " << ClapTrap::_name << std::endl;
}
