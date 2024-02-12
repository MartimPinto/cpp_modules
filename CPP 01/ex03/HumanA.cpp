/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:34:06 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/07 16:12:10 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Aname, Weapon& weapon) : weapon(weapon)
{
	this->_name = Aname;
}
HumanA::~HumanA(){}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << weapon.getType() << std::endl;
}
