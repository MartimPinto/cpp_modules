/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/19 16:46:15 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
			std::string _name;
			int	_health;
			int	_energy;
			int	_attackDamage;
			
	public:
			ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &src);
			ClapTrap& operator=(const ClapTrap &copy);
			~ClapTrap();
			
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif