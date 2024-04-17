/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:29:48 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/17 17:54:33 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	this->_name = "default";
	this->_health = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " built!" << std::endl;
	this->_name = name;
	this->_health = 10;
	this->_energy = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this == &copy)
		return (*this);
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attackDamage = copy._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_energy <= 0 || _health <=0)
	{
		std::cout << "ClapTrap " << _name << " can't attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energy -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_health -= amount;
	if (_health <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0 || _health <= 0)
	{
		std::cout << "ClapTrap " << _name << " can't repair itself" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairs and recovers " << amount << " hit points!" << std::endl;
	_energy *= -1;
	_health += amount;
}

std::string ClapTrap::getName() const
{
	return(this->_name);
}

int ClapTrap::getHealth() const
{
	return(this->_health);
}

int ClapTrap::getEnergy() const
{
	return(this->_energy);
}

int ClapTrap::getAttack() const
{
	return(this->_attackDamage);
}