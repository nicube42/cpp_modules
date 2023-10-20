/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:21:03 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 11:24:23 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>

class	Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
        Point(void);
        Point(const float a, const float b);
        Point(const Point &point);
        Point &operator= (const Point &point);

        ~Point(void);

        Fixed getX() const;
        Fixed getY() const;
        void setX(const Fixed& x_new);
        void setY(const Fixed& x_new);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);


#endif
