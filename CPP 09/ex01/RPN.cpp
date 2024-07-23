/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:42:19 by mcarneir          #+#    #+#             */
/*   Updated: 2024/07/23 14:17:33 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &RPN::operator=(RPN const &rhs)
{
	if ( this != &rhs )
	{
		this->_op = rhs._op;
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/


int RPN::calculate(std::string args)
{
	int a;
	int b;
	std::stringstream s(args);
	std::string curr;
	while(s >> curr)
	{
		if (curr == "+" || curr == "-" || curr == "/" || curr == "*")
		{
			if (_op.size() < 2)
				throw std::runtime_error("Error");
			b = _op.top();
			_op.pop();
			a = _op.top();
			_op.pop();
			switch(curr.at(0))
			{
				case '+':
						_op.push(a + b);
						break;
				case '-':
						_op.push(a - b);
						break;
				case '*':
						_op.push(a * b);
						break;
				case '/':
						if (b == 0)
							throw std::runtime_error("Error");
						else
							_op.push(a / b);
			}
		}
		else
			_op.push(atoi(curr.c_str()));
	}
	return _op.top();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */