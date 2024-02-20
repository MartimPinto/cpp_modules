/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martimpinto <martimpinto@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:24:06 by martimpinto       #+#    #+#             */
/*   Updated: 2024/02/19 14:41:27 by martimpinto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


static Fixed abs(Fixed x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

static Fixed getArea(Point const a, Point const b, Point const c)
{
	return(((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	Fixed triangle = abs(getArea(a, b, c));
	Fixed pabArea = abs(getArea(p, a, b));
	Fixed pbcArea = abs(getArea(p, b, c));
	Fixed pcaArea = abs(getArea(p, c, a));

	if (triangle == pabArea + pbcArea + pcaArea)
		return true;
	return false;
}