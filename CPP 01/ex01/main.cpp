/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/03/29 17:03:47 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	int			size;
	Zombie		*horde;
	
	if (argc != 3)
	{
		std::cout << BLUE << "USAGE: ./horde   size_of_horde   name_of_horde" << RESET << std::endl;
		exit(1);
	}
	size = atoi(argv[1]);
	horde = zombieHorde(size, argv[2]);
	if (!horde)
		return (2);
	std::cout << YELLOW << "\n\t---- Zombie Horde ----\n" << RESET << std::endl;
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;
	std::cout<<std::endl;
}