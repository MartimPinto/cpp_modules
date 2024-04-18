/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/18 11:53:37 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) 
{
  ScavTrap s("James");
  ScavTrap s2;
  ClapTrap c;

  s2 = s;
  c.attack("James");
  s.takeDamage(0);
  s.attack("Default");
  c.takeDamage(20);
  s.beRepaired(0);
  s.guardGate();
  s2.guardGate();
  
  return 0;
}

