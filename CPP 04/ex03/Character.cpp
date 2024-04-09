/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:56:13 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/09 14:46:14 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	this->_name = "default";
	this->equip_count = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 999; i++)
		this->unequiped[i] = NULL;
}

Character::Character(std::string const &name)
{
	this->_name = name;
	this->equip_count = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	for (int i = 0; i < 999; i++)
		this->unequiped[i] = NULL;
	std::cout << "Character " << this->_name << " constructor called" << std::endl;

}

Character::Character(const Character &src)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &copy)
{
	std::cout << "AMateria Copy assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	this->_name = copy._name;
	this->equip_count = copy.equip_count;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
		this->inventory[i] = copy.inventory[i];
	}
	for (int i = 0; i < 999; i++)
	{
		if (this->unequiped[i] != NULL)
			delete this->unequiped[i];
		this->unequiped[i] = copy.unequiped[i];
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
	for (int i = 0; i < 999; i++)
	{
		if (this->unequiped[i] != NULL)
			delete this->unequiped[i];
	}
}

std::string const &Character::getName() const 
{
	return(this->_name);
}

void Character::equip(AMateria *m)
{
	if (this->equip_count > 3)
	{
		std::cout << this->_name << "'s inventory is full and can't equip " << m->getType() << std::endl;
		if (m != NULL)
			delete m;
		return ;	
	}
	std::cout << this->_name << " equips " << m->getType() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			this->equip_count++;
			return ;
		}
	}
}

void Character::unequip(int idx)
{

	if (idx < 0 || idx > 3)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
	{
		std::cout << "There isn't anything to unequip" << std::endl;
		return ;
	}
	std::cout << this->_name << " unequips " << this->inventory[idx]->getType() << std::endl;
	for (int i = 0; i < 999; i++)
	{
		if (this->unequiped[i] == NULL)
		{
			this->unequiped[i] = this->inventory[idx];
			break;
		}
	}
	this->inventory[idx] = NULL;
	this->equip_count--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->inventory[idx] == NULL)
	{
		std::cout << this->_name << " has nothing to use" << std::endl;	
		return ;
	}
	this->inventory[idx]->use(target);
}
