/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/16 14:11:41 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
			int _value;
			static const int _numberFractional = 8;
	public:
			Fixed();
			Fixed(const Fixed &value);
			Fixed& operator = (const Fixed &value);
			~Fixed();
	
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif