/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:43:51 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/21 12:54:50 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &src);
			FragTrap& operator=(const FragTrap &copy);
			~FragTrap();
			
	void highFiveGuys(void);
};

#endif