/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:41:14 by martimpinto       #+#    #+#             */
/*   Updated: 2024/03/05 14:44:09 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain* _brain;
	public:
			Cat();
			Cat(const Cat &src);
			Cat& operator=(const Cat &copy);
			~Cat();
	
	void makeSound() const;
};

#endif