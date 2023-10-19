/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:50:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/19 15:03:29 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	Fixed const e = b + c;
	Fixed const f = c - b;
	Fixed const g = c / b;
	Fixed const h = c * b;
	bool const i = c > b;
	bool const j = c >= b;
	bool const k = c < b;
	bool const l = c <= b;
	bool const m = c == b;
	bool const n = c != b;

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "c + b is " << e << std::endl;
	std::cout << "c - b is " << f << std::endl;
	std::cout << "c / b is " << g << std::endl;
	std::cout << "c * b is " << h << std::endl;

	std::cout << "c > b is " << i << std::endl;
	std::cout << "c >= b is " << j << std::endl;
	std::cout << "c < b is " << k << std::endl;
	std::cout << "c <= b is " << l << std::endl;
	std::cout << "c == b is " << m << std::endl;
	std::cout << "c != b is " << n << std::endl;

	std::cout << "++a is " << ++a << std::endl;
	std::cout << "--a is " << --a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a-- is " << a-- << std::endl;

	std::cout << "Bigger between b and c is " << Fixed::max(b, c) << std::endl;
	std::cout << "Smaller between b and c is " << Fixed::min(b, c) << std::endl;

	return (0);
}
