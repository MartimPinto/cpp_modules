/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:16:44 by mcarneir          #+#    #+#             */
/*   Updated: 2024/05/22 16:25:52 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(): _name("default"), _gradeSign(150), _gradeExecute(150)
{
	this->_signed = false;
	std::cout << "AForm " << this->_name << " constructor called!" << std::endl;
}

AForm::AForm(std::string name, long gradeSign, long gradeExecute): _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (gradeSign > 150 || gradeExecute > 150)
		throw AForm::GradeTooLowException();
	else if (gradeSign < 1 || gradeExecute < 1)
		throw AForm::GradeTooHighException();
	this->_signed = false;
	std::cout << "AForm " << this->_name << " constructor called!" << std::endl;
}

AForm::AForm(AForm const &src): _name(src._name), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute)
{
	std::cout << "AForm " << src.getName() << " copy constructor called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << "AForm " << this->getName() << " destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &AForm::operator=( AForm const & rhs )
{
	if (this == &rhs)
		return *this;
	this->_signed = rhs.getSigned();
	return *this;
}

std::ostream &operator<<(std::ostream &os, AForm const &f)
{
	std::string isSigned;

	isSigned = f.getSigned() ? "Signed" : "Not Signed";
	os << GREEN << "AForm: " << RESET << f.getName() << "\n";
	os << GREEN << "Signed: " << RESET << isSigned << "\n";
	os << GREEN << "Grade Sign: " << RESET << f.getGradeSign() << "\n";
	os << GREEN << "Grade Execute: " << RESET << f.getGradeExecute() << std::endl;
	return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("The Form is not signed\n");
}

void AForm::beSigned(Bureaucrat const &src)
{
	if(src.getGrade() > this->_gradeSign)
		throw AForm::GradeTooLowException();
	_signed = true;
}

void AForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->_gradeExecute)
		throw AForm::GradeTooLowException();
	if (!_signed)
		throw AForm::FormNotSignedException();
	std::cout << executor.getName() << " executed the form " << this->getName() << std::endl;
	this->execute();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &AForm::getName() const
{
	return (this->_name);
}

long AForm::getGradeSign() const
{
	return (this->_gradeSign);
}

long AForm::getGradeExecute() const
{
	return (this->_gradeExecute);
}

bool AForm::getSigned() const
{
	return (this->_signed);
}


/* ************************************************************************** */