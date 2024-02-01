/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:58:52 by mcarneir          #+#    #+#             */
/*   Updated: 2024/01/31 17:35:32 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"

class Zombie
{
	private:
			std::string _name;
	public:
			Zombie(void);
			Zombie(std::string name);
			~Zombie(void);
			void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif