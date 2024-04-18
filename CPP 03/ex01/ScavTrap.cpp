/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:00:53 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/18 11:50:23 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " built!" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->_health = src._health;
    this->_energy = src._energy;
    this->_attackDamage = src._attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->_health = copy._health;
    this->_energy = copy._energy;
    this->_attackDamage = copy._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy <= 0 || _health <= 0) 
	{
		std::cout << "ScavTrap" << _name << " can't attack right now!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energy -= 1;
}

void    ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}