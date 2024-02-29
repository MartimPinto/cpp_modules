/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/29 12:48:51 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
			std::string type;	
	public:
			Animal();
			Animal(const Animal &src);
			Animal& operator=(const Animal &copy);
			virtual ~Animal();
	
	virtual void makeSound() const;
	std::string getType() const;
};

#endif