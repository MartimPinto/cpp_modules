/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:10:33 by martimpinto       #+#    #+#             */
/*   Updated: 2024/05/15 15:04:58 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
			const std::string	_name;
			long	_grade;
	public:
			Bureaucrat(const std::string name);
			Bureaucrat(const std::string name, long grade);
			Bureaucrat(const Bureaucrat &src);
			Bureaucrat &operator=(const Bureaucrat &copy);
			~Bureaucrat();
			
			void increaseGrade();
			void decreaseGrade();
			std::string const &getName() const;
			size_t getGrade() const;

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