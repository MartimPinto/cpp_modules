/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:10:33 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/18 15:56:26 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
			const std::string	_name;
			long	_grade;
	public:
			Bureaucrat();
			Bureaucrat(const std::string name);
			Bureaucrat(const std::string name, long grade);
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat &operator=(const Bureaucrat &copy);
			~Bureaucrat();
			
			void increaseGrade();
			void decreaseGrade();
			std::string const &getName() const;
			long getGrade() const;
			void signForm(AForm &form) const;
			void executeForm(AForm &form) const;

			class GradeTooHighException: public std::exception
			{
				public:
						virtual const char *what() const throw();
			};
			class GradeTooLowException: public std::exception
			{
				public:
						virtual const char *what() const throw();
			};
			
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif