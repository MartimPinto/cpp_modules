/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:16:36 by mcarneir          #+#    #+#             */
/*   Updated: 2024/05/22 16:18:32 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"

class Bureaucrat;

class AForm
{

	public:

		AForm();
		AForm(std::string name, long gradeSign, long gradeExecute);
		AForm(AForm const &src);
		virtual ~AForm();

		AForm &operator=(AForm const &rhs);
		
		void	beSigned(Bureaucrat const &src);
		std::string const &getName() const;
		bool getSigned() const;
		long getGradeSign() const;
		long getGradeExecute() const;
		void execute(const Bureaucrat &executor) const;
		virtual void execute(void) const = 0;

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

		class FormNotSignedException: public std::exception
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

std::ostream &			operator<<(std::ostream &os, AForm const &f);

#endif /* ************************************************************ AForm_H */