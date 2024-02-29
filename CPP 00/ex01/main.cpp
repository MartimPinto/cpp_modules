/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:54:36 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/26 13:08:02 by martimpinto      ###   ########.fr       */
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

	while (1)
	{
		std::cout << GREEN << "Type a command: " << RESET;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phone.add();
		else if (cmd == "EXIT")
			break;
		else if (cmd == "SEARCH")
			phone.search(phone);
		else if (cmd != "SEARCH" && cmd != "EXIT" && cmd != "ADD")
			usage();
    }
	return (0);
}
