/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:57:18 by mcarneir          #+#    #+#             */
/*   Updated: 2024/04/08 17:07:11 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
			AMateria *storage[4];
			int	stored;
	public:
			MateriaSource();
			MateriaSource(const MateriaSource &src);
			MateriaSource& operator=(const MateriaSource &copy);
			~MateriaSource();

			void learnMateria(AMateria*);
			AMateria* createMateria(std::string const & type);
			
};

#endif