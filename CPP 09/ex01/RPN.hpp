/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:42:22 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 12:45:21 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cstdlib>
# include <sstream>

class RPN
{

	public:

		RPN();
		RPN(RPN const &src);
		~RPN();

		RPN &operator=( RPN const & rhs);

		int calculate(std::string args);

	private:
		
		std::stack<int> _op;
		
			

};


#endif /* ************************************************************* RPN_H */