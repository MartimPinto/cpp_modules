/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:41:55 by mcarneir          #+#    #+#             */
/*   Updated: 2024/02/01 14:28:41 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return (NULL);
	Zombie	*zombieArray = new Zombie[n];
	for (int i = 0; i < n ; i++)
		new (&zombieArray[i]) Zombie(name);
	return (zombieArray);
}