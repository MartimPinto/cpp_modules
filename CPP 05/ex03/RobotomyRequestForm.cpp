/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:59:47 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/20 14:35:43 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):AForm("RobotomyRequestForm", 72, 45), _target(target) 
{
	std::cout << "RobotomyRequestForm created!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):AForm(src), _target(src._target)
{
	std::cout << "Robotomy copy constructor" << std::endl; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if ( this != &rhs )
	{
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute(void) const
{

	std::cout << "* BZZZZZ DREEEEEE *" << std::endl;

	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout << GREEN << this->_target << " has been successfully robotomized\n" << RESET << std::endl;
	else
		std::cout << RED << this->_target << " robotomization failed\n" << RESET << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */