/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:17:25 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/19 14:42:39 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
			Fixed const _x;
			Fixed const _y;
	public:
			Point();
			Point(const float x, const float y);
			Point(const Point &copy);
			Point& operator=(Point const &copy);
			~Point();

			Fixed getX() const;
			Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif