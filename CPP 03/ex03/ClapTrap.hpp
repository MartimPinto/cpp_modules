/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/17 17:50:57 by mcarneir         ###   ########.fr       */
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
	std::string getName() const;
	int getHealth() const;
	int getEnergy() const;
	int getAttack() const;
};

#endif