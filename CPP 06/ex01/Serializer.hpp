/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:10:32 by mcarneir          #+#    #+#             */
/*   Updated: 2024/06/26 17:59:59 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include "Data.hpp"

class Serializer
{

	public:
		
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);

		

	private:
		Serializer();
		Serializer(Serializer const &src);
		~Serializer();
		Serializer &operator=(Serializer const &rhs);

};

#endif /* ****************************************************** SERIALIZER_H */