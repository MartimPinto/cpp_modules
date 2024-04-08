/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:20:49 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 15:34:35 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string.h>

class Ice: public AMateria
{
	public:
			Ice();
			Ice(const Ice &src);
			Ice& operator=(const Ice &copy);
			~Ice();
			AMateria *clone() const;
			void use(ICharacter &target);
};


#endif