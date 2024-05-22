/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:16:44 by mcarneir          #+#    #+#             */
/*   Updated: 2024/05/22 16:25:52 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(): _name("default"), _gradeSign(150), _gradeExecute(150)
{
	this->_signed = false;
	std::cout << "Form " << this->_name << " constructor called!" << std::endl;
}

Form::Form(std::string name, long gradeSign, long gradeExecute): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw Form::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	this->_signed = false;
	std::cout << "Form " << this->_name << " constructor called!" << std::endl;
}

Form::Form(Form const &src): _name(src._name), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	std::cout << "Form " << src.getName() << " copy constructor called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form " << this->getName() << " destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=( Form const & rhs )
{
	if (this == &rhs)
		return *this;
	this->_signed = rhs.getSigned();
	return *this;
}

std::ostream &operator<<(std::ostream &os, Form const &f)
{
	std::string isSigned;

	isSigned = f.getSigned() ? "Signed" : "Not Signed";
	os << GREEN << "Form: " << RESET << f.getName() << "\n";
	os << GREEN << "Signed: " << RESET << isSigned << "\n";
	os << GREEN << "Grade Sign: " << RESET << f.getGradeSign() << "\n";
	os << GREEN << "Grade Execute: " << RESET << f.getGradeExecute() << std::endl;
	return os;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

void Form::beSigned(Bureaucrat const &src)
{
	if(src.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Form::getName() const
{
	return (this->_name);
}

long Form::getGradeSign() const
{
	return (this->_gradeSign);
}

long Form::getGradeExecute() const
{
	return (this->_gradeExecute);
}

bool Form::getSigned() const
{
	return (this->_signed);
}


/* ************************************************************************** */