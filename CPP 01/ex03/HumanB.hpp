/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:10:04 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/07 16:41:24 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
			Weapon* weapon;
			std::string _name;
	public:
			HumanB(std::string Bname);
			~HumanB();
			void attack(void);
			void setWeapon(Weapon& weapon_name);
};

#endif