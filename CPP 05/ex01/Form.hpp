/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:16:36 by mcarneir          #+#    #+#             */
/*   Updated: 2024/05/22 16:18:32 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, long gradeSign, long gradeExecute);
		Form(Form const &src);
		~Form();

		Form &operator=(Form const &rhs);
		
		void	beSigned(Bureaucrat const &src);
		std::string const &getName() const;
		bool getSigned() const;
		long getGradeSign() const;
		long getGradeExecute() const;

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

	private:
			const std::string	_name;
			bool				_signed;
			const long			_gradeSign;
			const long			_gradeExecute;

};

std::ostream &			operator<<(std::ostream &os, Form const &f);

#endif /* ************************************************************ FORM_H */