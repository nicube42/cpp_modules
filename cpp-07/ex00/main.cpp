/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:16:10 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 14:41:51 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"

int	main(void)
{
	int	a = 1;
	int b = 2;
	
	double c = 1.1;
	double d = 1.2;
	std::string e = "chaine1";
	std::string f = "chaine2";

	std::cout << std::endl << GREEN << "Test swap function" << RESET << std::endl << std::endl;

	std::cout << "Before swap: int: " << a << ", " << b << std::endl;
	std::cout << "Before swap: double: " << c << ", " << d << std::endl;
	std::cout << "Before swap: std::string: " << e << ", " << f << std::endl;
	swap(a, b);
	std::cout << "After swap: int: " << a << ", " << b << std::endl;
	swap(c, d);
	std::cout << "After swap: double: " << c << ", " << d << std::endl;
	swap(e, f);
	std::cout << "After swap: std::string: " << e << ", " << f << std::endl;

	std::cout << std::endl << GREEN << "Test min function" << RESET << std::endl << std::endl;

	std::cout << "Minimum number between 1 and 2 is " << min<int>(1, 2) << std::endl;
	std::cout << "Minimum number between 1.5 and 1.6 is " << min<double>(1.5, 1.6) << std::endl;
	std::cout << "Minimum between chaine1 and chaine2 is " << ::min(e, f) << std::endl;
	std::cout << "Minimum number between 1 and 1 is " << min<int>(1, 1) << std::endl;

	std::cout << std::endl << GREEN << "Test max function" << RESET << std::endl << std::endl;

	std::cout << "Maximum number between 1 and 2 is " << max<int>(1, 2) << std::endl;
	std::cout << "Maximum number between 1.5 and 1.6 is " << max<double>(1.5, 1.6) << std::endl;
	std::cout << "Maximum between chaine1 and chaine2 is " << ::max(e, f) << std::endl;
	std::cout << "Maximum number between 1 and 1 is " << max<int>(1, 1) << std::endl;

	return (0);
}

/*Main showed in subject*/

// int	main( void )
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }
