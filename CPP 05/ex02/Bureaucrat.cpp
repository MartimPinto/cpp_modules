/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:30:05 by martimpinto       #+#    #+#             */
/*   Updated: 2024/05/22 17:19:37 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default")
{
	this->_grade = 150;
	std::cout << "Bureaucrat " << this->_name << " constructor called!" << std::endl;
}

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

long Bureaucrat::getGrade() const
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
	std::cout << this->getName() << " Grade Decreased to " << this->getGrade() << std::endl;
}

void Bureaucrat::signForm(AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << getName() << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
	}
		
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