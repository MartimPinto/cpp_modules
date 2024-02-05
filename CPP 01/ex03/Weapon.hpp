/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:11:25 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/05 17:54:22 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include <string>
#include <iostream>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"

class Weapon
{
	private:
			std::string _type;
	public:
			Weapon(std::string type);
			~Weapon(void);
			void setType(std::string newType);
			const std::string& getType(void); 
}

#endif