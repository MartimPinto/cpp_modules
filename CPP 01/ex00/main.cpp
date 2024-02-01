/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/01/31 17:44:04 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	std::string	randomZombo;
	std::string	newZombieName;
	Zombie		*zombie;
	
	if (argc != 3)
	{
		std::cout << BLUE << "USAGE: ./brainz name_of_random_chump name_of_new_zombie" << RESET << std::endl;
		exit (1);
	}
	randomZombo = argv[1];
	newZombieName = argv[2];

	std::cout << YELLOW << "\n\t---- Random Chump ----\n" << RESET << std::endl;
	randomChump(randomZombo);

	std::cout << YELLOW << "\n\t---- New_Zombie----\n" << RESET << std::endl;
	zombie = newZombie(newZombieName);
	zombie->announce();
	delete zombie;
	
}