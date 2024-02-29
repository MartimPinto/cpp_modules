/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:35:45 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/26 13:34:16 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_id = 0;
	this->numContacts = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::add(void)
{
	static int 	i = 0;
	
	std::string fn, ln, nn, pn, ds;

	std::cout << std::endl;	
	std::cout << "First Name: ";
	std::getline(std::cin, fn);
	std::cout << "Last Name: ";
	std::getline(std::cin, ln);
	std::cout << "Nickname: ";
	std::getline(std::cin, nn);
	std::cout << "Phone Number: ";
	std::getline(std::cin, pn);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, ds);
	if (fn.empty() || ln.empty() || nn.empty() || pn.empty() || ds.empty())
	{
		std::cout << RED << "Can't add a contact with an empty field" << RESET << std::endl;
		return;
	}
	if (i < 8)
	{
		this->contact[i] = Contact(fn, ln, nn, pn, ds);
		i++;
	}
	else
	{
		int oldestId = i % 8;
		this->contact[oldestId] = Contact(fn, ln, nn, pn, ds);
		i = (oldestId + 1) % 8;
	}
	if (this->numContacts <= 8)
		this->numContacts += 1;
	std::cout << std::endl;

}

void PhoneBook::search(PhoneBook &phone)
{
	int index;
 	std::cout << std::endl;
    std::cout << "----------- PHONEBOOK CONTACTS ------------" << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(10) << std::right << "INDEX" << "|";
    std::cout << std::setw(10) << std::right << "FIRST NAME" << "|";
    std::cout << std::setw(10) << std::right << "LAST NAME" << "|";
    std::cout << std::setw(10) << std::right << "NICKNAME" << std::endl;
	for (int i = 0; i < 8; i++)
    {
        std::string firstName = phone.contact[i].getName();
        std::string lastName = phone.contact[i].getLastName();
        std::string nickname = phone.contact[i].getNickName();
       	if (firstName.length() > 10) 
        	firstName = firstName.substr(0, 9) + ".";
    	if (lastName.length() > 10) 
        	lastName = lastName.substr(0, 9) + ".";
    	if (nickname.length() > 10)
        	nickname = nickname.substr(0, 9) + ".";
        std::cout << std::setw(10) << std::right << i << "|"
                  << std::setw(10) << std::right << firstName << "|"
                  << std::setw(10) << std::right << lastName << "|"
                  << std::setw(10) << std::right << nickname << std::endl;
    }
	std::cout << std::endl;
	if (phone.numContacts != 0)
	{
		std::cout << std::endl;
		std::cout << YELLOW "Enter the index of the contact you want to print: " << RESET;
		std::cin >> index;
		std::cin.ignore();
		std::cout << std::endl;
		phone.print(index);
	}
}

void PhoneBook::print(int index)
{
    if (index >= 0 && index < 8) 
        this->contact[index].printContact();
	else 
	{
        std::cout << RED << "Invalid contact index." << RESET << std::endl;
		std::cout << std::endl;
	}

}