/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:21:57 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/08 17:27:07 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#define RESET	"\033[0m"
#define RED		"\033[1m\033[31m"
#define GREEN	"\033[1m\033[32m"
#define YELLOW	"\033[1m\033[33m"
#define BLUE	"\033[1m\033[34m"

#include <string>
#include <fstream>
#include <iostream>

class Harl
{
	private:
			
			std::string level;
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);

	public:
			Harl();
			~Harl();
			void complain(std::string level);
};

#endif