/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:30:05 by martimpinto       #+#    #+#             */
/*   Updated: 2024/05/07 17:19:29 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name): _name(name)
{
	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name << " constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, size_t grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	std::cout << "Bureaucrat " << src.getName() << " copy constructor called!" << std::endl;
	*this = src;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if(this == &copy)
		return(*this);
	const_cast<std::string&>(_name) = copy._name;
	this->_grade = copy.getGrade();
}

std::string const &Bureaucrat::getName() const 
{
	return(this->_name);
}

size_t Bureaucrat::getGrade() const
{
	return(this->_grade);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low\n");
}