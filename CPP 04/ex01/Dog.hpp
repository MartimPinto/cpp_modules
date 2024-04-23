/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:14 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:23:01 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain* _brain;
	public:
			Dog();
			Dog(const Dog &src);
			Dog& operator=(const Dog &copy);
			~Dog();
	
	void makeSound() const;
	Brain *getBrain() const;
};

#endif