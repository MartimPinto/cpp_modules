/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:12:28 by martimpinto       #+#    #+#             */
/*   Updated: 2024/06/18 12:42:23 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern(Intern const & src);
		~Intern();

		Intern &operator=(Intern const &rhs);
		AForm* makeShrubbery(const std::string &target) const;
		AForm* makeRobotomy(const std::string &target) const;
		AForm* makePresidential(const std::string &target) const;
		AForm* makeForm(const std::string &name, const std::string &target);

		class FormError: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

	private:

};

#endif /* ********************************************************** INTERN_H */