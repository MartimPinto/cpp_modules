/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:41:25 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/09 14:44:21 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
	private:
			std::string _name;
			int	equip_count;
			AMateria *inventory[4];
			AMateria *unequiped[999];
	public:
			Character();
			Character(std::string const &name);
			Character(const Character &src);
			Character& operator=(const Character &copy);
			~Character();
			
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
			
};


#endif