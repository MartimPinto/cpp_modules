/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:12:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/18 15:44:39 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	std::cout << "Intern copy constructor called" << std::endl;

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Intern::FormError::what() const throw()
{
	return ("This type of Form does not exist. Try: Presidential, Robotomy or Shrubbery\n");
}

AForm* Intern::makeShrubbery(const std::string &target) const
{
	return(new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(const std::string &target) const
{
	return(new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(const std::string &target) const
{
	return(new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(const std::string &name, const std::string &target)
{
	std::string names[3] = {"Shrubbery", "Robotomy", "Presidential"};
	int	i = 0;
	while(i < 3)
	{
		if(names[i] == name)
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			return(makeShrubbery(target));
		case 1:
			return(makeRobotomy(target));
		case 2:
			return(makePresidential(target));
		default:
			throw Intern::FormError();
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */