/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:46:31 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 10:58:58 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Point   point_a(1, 1);
    Point   point_b(4, 1);
    Point   point_c(2.5, 4);
    Point   point(2.5, 2);
    Point   point2(0, 0);
    Point   point3(2.5, 1);

    std::cout << "Is the point in the triangle ?: " << bsp(point_a, point_b, point_c, point) << std::endl;
    std::cout << "Is the point in the triangle ?: " << bsp(point_a, point_b, point_c, point2) << std::endl;
    std::cout << "Is the point in the triangle ?: " << bsp(point_a, point_b, point_c, point3) << std::endl;
    return (0);
}
