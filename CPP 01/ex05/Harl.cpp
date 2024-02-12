/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:27:47 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/12 15:45:24 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level)
{
	void (Harl::*funcs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*funcs[i])();
}

void Harl::debug(void)
{
		std::cout <<  GREEN << "I love having extra bacon for my " \
		"7XL-double-cheese-triple-pickle-special ketchup " \
		"burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
	std::cout << BLUE << "I cannot believe adding extra bacon " \
	"costs more money. You didn’t put " \
	"enough bacon in my burger! " \
	"If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW <<"I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started " ;
	std::cout << "working here since last month." << RESET << std::endl;
}

void::Harl::error(void)
{
	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}