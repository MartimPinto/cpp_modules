/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:54:36 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/25 17:37:10 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void usage()
{
	std::cout << RED << "Please use ADD, SEARCH OR EXIT" << RESET << std::endl;
}

int main (void)
{
	std::string cmd;
	PhoneBook phone;

	while (std::cin)
	{
		std::cout << GREEN << "Type a command: " << RESET;
		if (std::getline(std::cin, cmd))
		{
			if (cmd == "ADD")
				phone.add();
			else if (cmd == "EXIT")
				break;
			else if (cmd == "SEARCH")
				phone.search(phone);
			else if (cmd != "SEARCH" && cmd != "EXIT" && cmd != "ADD")
				usage();
		}
		else
			break ;
    }
	return (0);
}
