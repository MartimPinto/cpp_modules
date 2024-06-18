/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:59:47 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/17 12:38:10 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("PresidentialPardonForm", 25, 5), _target(target) 
{
	std::cout << "PresidentialPardonForm created!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src):AForm(src), _target(src._target)
{
	std::cout << "Presidential copy constructor" << std::endl; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
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

	void	PresidentialPardonForm::execute(void) const
	{		
		std::cout << this->_target << " has been pardoned by President Zaphod Beeblebrox" << std::endl;	
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */