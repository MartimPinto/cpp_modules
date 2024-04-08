/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:52:31 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 19:25:33 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
			std::string	_type;
	public:
			AMateria();
			AMateria(std::string const &type);
			AMateria(const AMateria &src);
			AMateria& operator=(const AMateria &copy);
			virtual ~AMateria();

			std::string const &getType() const;
			void setType(std::string const &type);
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
					
};



#endif