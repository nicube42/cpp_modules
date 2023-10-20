/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:31:38 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 11:27:23 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed())
{
}

Point::Point(const float a, const float b) : _x(Fixed(a)), _y(Fixed(b))
{
}

Point::Point(const Point &point) : _x(point._x), _y(point._y)
{
}



Point::~Point(void)
{
    
}

Point &Point::operator= (const Point &point)
{
   if (this != &point) {
        this->setX(point._x);
        this->setY(point._y);
    }
    return *this;
}

Fixed   Point::getX() const
{
    return (_x);
}

Fixed   Point::getY() const
{
    return (_y);
}

void Point::setX(const Fixed& x_new)
{
    const_cast<Fixed&>(_x) = x_new;
}

void Point::setY(const Fixed& y_new)
{
    const_cast<Fixed&>(_y) = y_new;
}
