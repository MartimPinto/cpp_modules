/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/20 13:29:32 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void) 
{
  // Test default constructor
  ScavTrap defaultTrap;
  std::cout << std::endl;

  // Test constructor with name
  ScavTrap namedTrap("Bob");
  std::cout << std::endl;

  // Test copy constructor
  ScavTrap copiedTrap(namedTrap);
  std::cout << std::endl;

  // Test assignment operator
  ScavTrap assignedTrap;
  assignedTrap = namedTrap;
  std::cout << std::endl;

  // Test attack function
  namedTrap.attack("target1");
  std::cout << std::endl;

  // Test guardGate function
  namedTrap.guardGate();
  std::cout << std::endl;

  // Destructors are called automatically when objects go out of scope

  return 0;
}

