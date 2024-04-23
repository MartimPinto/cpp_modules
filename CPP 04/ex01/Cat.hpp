/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:14 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/23 12:15:09 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain *_brain;
	public:
			Cat();
			Cat(const Cat &src);
			Cat& operator=(const Cat &copy);
			~Cat();
	
	void makeSound() const;
	Brain *getBrain() const;
};

#endif