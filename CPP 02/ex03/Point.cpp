/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:23:49 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/19 14:44:09 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point &copy): _x(copy._x), _y(copy._y) {}

Point& Point::operator=(Point const &copy)
{
	if (this == &copy)
		return(*this);
	(Fixed)this->_x = copy.getX();
	(Fixed)this->_y = copy.getY();
	return (*this);
}

Point::~Point(){}

Fixed Point::getX() const 
{
	return this->_x;
}

Fixed Point::getY() const 
{
	return this->_y;
}