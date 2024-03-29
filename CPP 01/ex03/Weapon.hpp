/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:11:25 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/07 17:13:53 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	private:
			std::string _type;
	public:
			Weapon(std::string type);
			~Weapon(void);
			void setType(std::string newType);
			const std::string& getType(void); 
};

#endif