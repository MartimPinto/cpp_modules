#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{

	public:

		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm&		operator=(ShrubberyCreationForm const &rhs);
		virtual void execute(void) const;

	private:
			ShrubberyCreationForm();
			std::string	_target;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */