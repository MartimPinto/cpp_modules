/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:59:03 by mcarneir          #+#    #+#             */
/*   Updated: 2024/02/01 14:21:55 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << GREEN << this->_name << RESET << RED << " has died" << RESET << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << GREEN << this->_name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
