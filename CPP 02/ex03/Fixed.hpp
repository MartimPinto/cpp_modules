/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:14:20 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/16 16:57:58 by martimpinto      ###   ########.fr       */
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
			Fixed&	operator=(Fixed const &value);
			~Fixed();

			//Arithmetic Operators
			Fixed 	operator+(Fixed const &value) const;
			Fixed 	operator-(Fixed const &value) const;
			Fixed 	operator*(Fixed const &value) const;
			Fixed 	operator/(Fixed const &value) const;

			//Increment & Decrement
			Fixed&	operator--(void);
			Fixed	operator--(int a);
			Fixed&	operator++(void);
			Fixed	operator++(int a);

			//Comparisons
			bool operator>(Fixed const &value) const;
			bool operator<(Fixed const &value) const;
			bool operator>=(Fixed const &value) const;
			bool operator<=(Fixed const &value) const;
			bool operator==(Fixed const &value) const;
			bool operator!=(Fixed const &value) const;

			//Min and max
			static Fixed& min(Fixed& n1, Fixed &n2);
			static const Fixed& min(const Fixed& n1, const Fixed& n2);
			static Fixed& max(Fixed& n1, Fixed& n2);
			static const Fixed& max(const Fixed& n1, const Fixed& n2);
				
	//Getters and Setters
	int getRawBits(void) const;
	void setRawBits(int const raw);

	//Conversions
	float toFloat(void) const;
	int toInt(void) const;	
};

std::ostream& operator<<(std::ostream& out, const Fixed &value);


#endif