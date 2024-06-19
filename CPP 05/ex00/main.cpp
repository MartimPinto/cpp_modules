/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:27:42 by mcarneir          #+#    #+#             */
/*   Updated: 2024/06/19 12:46:02 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"

int main()
{
	try
	{
		std::cout << RED << "#----- INCREASE TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Bureaucrat a("Andy", 2);
		
		std::cout << a;
		a.increaseGrade();
		std::cout << a;
		a.increaseGrade();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	try
	{
		std::cout << RED << "#----- DECREASE TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Bureaucrat b("Bryan", 149);
		
		std::cout << b;
		b.decreaseGrade();
		std::cout << b;
		b.decreaseGrade();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	try
	{
		std::cout << RED << "#----- CREATION TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Bureaucrat c("Claire", 151);
		//Bureaucrat d("Denise", 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
	try
	{
		std::cout << RED << "#----- OPERATOR OVERLOAD TEST -----#" << RESET << std::endl;
		std::cout << std::endl;
		
		Bureaucrat e("Edward", 78);
		Bureaucrat f("Francine");
		Bureaucrat g("Gary", 2);
		Bureaucrat h("John");
		std::cout << std::endl;

		
		std::cout << e << f << g << h;
		h = g;
		std::cout << e << f << g << h;
		std::cout << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what();
		std::cout << std::endl;
	}
}