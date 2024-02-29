/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:46:04 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/29 13:47:58 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
			std::string _ideas[100];	
	public:
			Brain();
			Brain(const Brain &src);
			Brain& operator=(const Brain &copy);
			virtual ~Brain();
	
};

#endif