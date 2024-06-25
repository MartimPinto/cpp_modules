/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:27:42 by mcarneir          #+#    #+#             */
/*   Updated: 2024/06/20 14:34:37 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


int main()
{
	try
	{
		std::cout << std::endl;
		
		Bureaucrat a("Andy", 2);
		ShrubberyCreationForm form1("Shrub");
		RobotomyRequestForm form2("Rob");
		PresidentialPardonForm form3("Prez");
		
		std::cout << std::endl;
		std::cout << RED << "#----- Shrubbery -----#" << RESET << std::endl;
		std::cout << std::endl;

		a.signForm(form1);
		a.executeForm(form1);

		std::cout << std::endl;
		std::cout << RED << "#----- Robotomy -----#" << RESET << std::endl;
		std::cout << std::endl;

		a.signForm(form2);
		a.executeForm(form2);

		std::cout << std::endl;
		std::cout << RED << "#----- Presidential -----#" << RESET << std::endl;
		std::cout << std::endl;

		a.signForm(form3);
		a.executeForm(form3);
		
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
	}	
}