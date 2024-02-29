/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:14 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/21 13:56:05 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap 
{
	public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &src);
			ScavTrap& operator=(const ScavTrap &copy);
			~ScavTrap();
	
	void attack(const std::string& target);
	void guardGate();
};

#endif