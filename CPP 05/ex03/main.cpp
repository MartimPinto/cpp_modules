/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:27:42 by mcarneir          #+#    #+#             */
/*   Updated: 2024/06/20 14:01:56 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main()
{
	try
	{
		std::cout << std::endl;
		std::cout << RED << "#----- MAKE FORM TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		Intern rando;
		Bureaucrat	a("Arthur", 1);
		AForm *rff1;
		AForm *rff2;
		AForm *rff3;

		rff1 = rando.makeForm("Presidential", "John");
		rff2 = rando.makeForm("Shrubbery", "Test");
		rff3 = rando.makeForm("Robotomy", "Bryan");
		std::cout << GREEN << rff1->getName() << RESET << std::endl;
		std::cout << GREEN << rff2->getName() << RESET << std::endl;
		std::cout << GREEN << rff3->getName() << RESET << std::endl;
		a.signForm(*rff1);
		a.executeForm(*rff1);
		a.signForm(*rff2);
		a.executeForm(*rff2);
		a.signForm(*rff3);
		a.executeForm(*rff3);
		
		delete rff1;
		delete rff2; 
		delete rff3;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
	}
	try
	{
		std::cout << std::endl;
		std::cout << RED << "#----- INVALID FORM TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		Intern randy;
		Bureaucrat	b("Beatrice", 1);
		AForm *rff4;

		rff4 = randy.makeForm("Quizz", "Andy");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}