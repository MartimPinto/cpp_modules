/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:52:31 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/05 15:02:31 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria
{
	protected:
			std::string	_type;
	public:
			AMateria();
			AMateria(std::string const &type);
			AMateria(const AMateria &src);
			AMateria& operator=(const AMateria &copy);
			~AMateria();

			std::string const &getType() const;
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
					
};



#endif