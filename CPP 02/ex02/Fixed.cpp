/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcarneir <mcarneir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:29:48 by martimpinto       #+#    #+#             */
/*   Updated: 2024/04/05 15:44:13 by mcarneir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const int param)
{
	this->_value = param << _numberFractional;
}

Fixed::Fixed(const float nbr)
{
	this->_value = roundf(nbr * (1 << Fixed::_numberFractional));
}

Fixed::Fixed(const Fixed& value)
{
	this->setRawBits(value.getRawBits());
}

Fixed& Fixed::operator=(Fixed const &value)
{
	if (this == &value)
		return (*this);
	this->_value = value.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

//----------------Arithmetic Operations--------------

Fixed Fixed::operator+(Fixed const &value) const
{
	return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator-(Fixed const &value) const
{
	return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator*(Fixed const &value) const
{
	return (Fixed(this->toFloat() * value.toFloat()));
}

Fixed Fixed::operator/(Fixed const &value) const
{
	return (Fixed(this->toFloat() / value.toFloat()));
}

//----------------Increment & Decrement--------------

Fixed& Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int a)
{
	Fixed copy(*this);
	
	(void)a;
	--(*this);
	return (copy);
}

Fixed& Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int a)
{
	Fixed copy(*this);
	
	(void)a;
	++(*this);
	return (copy);
}

//----------------Comparisons--------------

bool Fixed::operator>(Fixed const &value) const 
{
	return(this->getRawBits() > value.getRawBits());
}

bool Fixed::operator<(Fixed const &value) const 
{
	return(this->getRawBits() < value.getRawBits());
}

bool Fixed::operator>=(Fixed const &value) const 
{
	return(this->getRawBits() >= value.getRawBits());
}

bool Fixed::operator<=(Fixed const &value) const 
{
	return(this->getRawBits() <= value.getRawBits());
}

bool Fixed::operator==(Fixed const &value) const 
{
	return(this->getRawBits() == value.getRawBits());
}

bool Fixed::operator!=(Fixed const &value) const 
{
	return(this->getRawBits() != value.getRawBits());
}

//----------------Min & Max--------------

Fixed& Fixed::min(Fixed &n1, Fixed &n2)
{
	return(n1 < n2 ? n1 : n2);
}

const Fixed &Fixed::min(const Fixed &n1, const Fixed &n2)
{
	return(n1 < n2 ? n1 : n2);
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2)
{
	return(n1 > n2 ? n1 : n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	return(n1 > n2 ? n1 : n2);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat(void) const 
{
	return((float)this->_value / (float)(1 << Fixed::_numberFractional));
}

int Fixed::toInt(void) const 
{
	return(this->_value / (1 << Fixed::_numberFractional));
}

std::ostream& operator<<(std::ostream& out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}