/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:45:22 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 11:13:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float   sign(Point a, Point b, Point c)
{
    return ((a.getX().toFloat() - c.getX().toFloat()) *
            (b.getY().toFloat() - c.getY().toFloat()) -
            (b.getX().toFloat() - c.getX().toFloat()) *
            (a.getY().toFloat() - c.getY().toFloat()));
}

bool bsp(Point a, Point b, Point c, Point point)
{
    float   d1, d2, d3;
    bool    has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);
    if (d1 == 0 || d2 == 0 || d3 == 0)
        return (false);
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(has_neg && has_pos);
}
