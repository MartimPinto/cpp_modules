/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:27:42 by mcarneir          #+#    #+#             */
/*   Updated: 2024/05/22 17:13:34 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	try
	{
		std::cout << RED << "#----- Sign Test -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Bureaucrat a("Andy", 3);
		Form form("Test", 3, 1);
		std::cout << std::endl;

		std::cout << form;
		std::cout << std::endl;
		a.signForm(form);
		std::cout << std::endl;
		std::cout << form;
		std::cout << std::endl;
		a.decreaseGrade();
		a.signForm(form);
		
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	
	try
	{
		std::cout << std::endl;
		std::cout << RED << "#----- Creation Test -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Form form("Test", 151, 1);
		//Form form("Test", 0, 1);
		std::cout << std::endl;

	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	
}