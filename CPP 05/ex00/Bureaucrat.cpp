/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:30:05 by martimpinto       #+#    #+#             */
/*   Updated: 2024/05/15 15:11:08 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name): _name(name)
{
	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name << " constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, long grade): _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
	std::cout << "Bureaucrat " << this->_name << " constructor called!" << std::endl;
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
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->getName() << " destructor called" << std::endl;
}


std::string const &Bureaucrat::getName() const 
{
	return(this->_name);
}

size_t Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void Bureaucrat::increaseGrade()
{
	if (this->getGrade() == 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void Bureaucrat::decreaseGrade()
{
	if (this->getGrade() == 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("Grade too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low\n");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return os;
}