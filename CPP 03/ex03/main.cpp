/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/17 18:26:24 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*int main( void )
{
    DiamondTrap ash( "Ash" );
    DiamondTrap ash2( ash );
    DiamondTrap ash3(".");

    ash.whoAmI();
    ash2.whoAmI();
    ash3 = ash;
    ash3.whoAmI();

    ash.attack( "the air" );
    ash.takeDamage( 10 );
    ash.beRepaired( 10 );

    return 0;
    
}*/

int main(void)
{
    DiamondTrap a("Dino");
    ClapTrap    b("John");
    ScavTrap    c("Niamh");
    FragTrap    d("Bryan");
    
    std::cout << std::endl;
    std::cout << "My name is: " << b.getName() << " and I'm a ClapTrap!" << std::endl;
    std::cout << "My health is: " << b.getHealth() << " and my energy: " << b.getEnergy() << std::endl;
    std::cout << "My attack power is of: " << b.getAttack() << std::endl;
    std::cout << std::endl;

    std::cout << "My name is: " << c.getName() << " and I'm a ScavTrap!" << std::endl;
    std::cout << "My health is: " << c.getHealth() << " and my energy: " << c.getEnergy() << std::endl;
    std::cout << "My attack power is of: " << c.getAttack() << std::endl;
    std::cout << std::endl;


    std::cout << "My name is: " << d.getName() << " and I'm a FragTrap!" << std::endl;
    std::cout << "My health is: " << d.getHealth() << " and my energy: " << d.getEnergy() << std::endl;
    std::cout << "My attack power is of: " << d.getAttack() << std::endl;
    std::cout << std::endl;
    
    
    std::cout << "My name is: " << a.getName() << " and I'm a DiamondTrap!" << std::endl;
    std::cout << "My health is: " << a.getHealth() << " and my energy: " << a.getEnergy() << std::endl;
    std::cout << "My attack power is of: " << a.getAttack() << std::endl;
    a.whoAmI();
    a.attack("the air");
    std::cout << std::endl;
    
}

