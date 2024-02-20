/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:19:52 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/19 16:21:03 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) 
{
	ClapTrap b("Bryan");

	b.takeDamage(5);
	b.attack("enemy");
	b.takeDamage(4);
	b.beRepaired(1);
	b.takeDamage(10);
}
