/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:20:49 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 15:35:53 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string.h>

class Cure: public AMateria
{
	public:
			Cure();
			Cure(const Cure &src);
			Cure& operator=(const Cure &copy);
			~Cure();
			AMateria *clone() const;
			void use(ICharacter &target);
};


#endif