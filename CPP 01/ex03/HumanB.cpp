/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:18:50 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/08 13:36:55 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string Bname)
{
	this->_name = Bname;
	this->weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon_name)
{
	this->weapon = &weapon_name;
}

void HumanB::attack(void)
{
	if (weapon && weapon->getType() != "")
		std::cout << this->_name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << this->_name << " stares menacingly" << std::endl;
}