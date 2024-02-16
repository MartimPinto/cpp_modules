/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/16 14:11:14 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
			int _value;
			static const int _numberFractional = 8;
	public:
			
			//Constructors & Destructors
			Fixed();
			Fixed(const int param);
			Fixed(const float nbr);
			Fixed(const Fixed &value);
			Fixed& operator = (const Fixed &value);
			~Fixed();
	
	//Getters and Setters
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Conversions
	float toFloat(void) const;
	int toInt(void) const;	
};

std::ostream& operator<<(std::ostream& out, const Fixed &value);


#endif