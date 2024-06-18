#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{

	public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		virtual void execute(void) const;

	private:
		RobotomyRequestForm();
		std::string _target;


};


#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */