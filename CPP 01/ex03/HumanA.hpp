/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:10:04 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/07 16:09:55 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
			Weapon& weapon;
			std::string _name;
	public:
			HumanA(std::string Aname, Weapon& weapon);
			~HumanA();
			void attack(void);
};

#endif