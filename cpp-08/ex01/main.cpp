/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:03:30 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 17:01:25 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	rando()
{
	return (int)(rand());
}

int	main(void)
{
	srand(time(NULL));
	/*------------------------------------ test1 -----------------------------*/

	std::cout << GREEN << "Creating a list of 100000 numbers" << RESET << std::endl;
	Span span(100000);
	std::cout << GREEN << "Fill list with consecutive numbers" << RESET << std::endl;
	try
	{
		for (int i = 0; i < 100000; i++)
			span.addNumber(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << std::endl;


	/*------------------------------------ test2 -----------------------------*/

	std::cout << GREEN << "Creating a list of 5 numbers" << RESET << std::endl;
	Span span2(5);
	std::cout << GREEN << "Fill list with non consecutive numbers" << RESET << std::endl;
	try
	{
		span2.addNumber(1);
		span2.addNumber(10000);
		span2.addNumber(3);
		span2.addNumber(5);
		span2.addNumber(9);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << std::endl;


	/*------------------------------------ test3 -----------------------------*/

	std::cout << GREEN << "Creating a list of 1 numbers" << RESET << std::endl;
	Span span3(1);
	std::cout << GREEN << "Fill list with 1" << RESET << std::endl;
	try
	{
		span3.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << std::endl;


	/*------------------------------------ test4 -----------------------------*/

	std::cout << GREEN << "Creating a list of 1 numbers" << RESET << std::endl;
	Span span4(1);
	std::cout << GREEN << "Fill list with two numbers" << RESET << std::endl;
	try
	{
		span4.addNumber(1);
		span4.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	std::cout << std::endl;


	/*------------------------------------ test5 -----------------------------*/

	std::cout << GREEN << "Creating a list of 10000000 consecutive numbers with negatives"
		<< RESET << std::endl;
	Span span5(10000000);
	std::cout << GREEN << "Fill list with 10000000 numbers" << RESET << std::endl;
	try
	{
		for (int i = 0; i < 1000000; i++)
			span5.addNumber(i - 1000);
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span5.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
		std::cout << std::endl;


	/*------------------------------------ test6 -----------------------------*/

	std::cout << GREEN << "Creating a list of 10000000 random numbers with negatives"
		<< " using fillNumbersRandom function"<< RESET << std::endl;
	Span	span6(10000000);
	std::vector<int>	tmp(9999999);
	std::generate(tmp.begin(), tmp.end(), rando);
	std::cout << GREEN << "Fill list with 10000000 random numbers" << RESET << std::endl;
	try
	{
		span6.fillNumbersRandom(tmp.begin(), tmp.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Shortest span is: " << span6.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span is: " << span6.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "error: " << e.what() << '\n';
	}
	return (0);
}

/*--------------------------------- subject main -------------------------------------*/

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6); sp.addNumber(3); sp.addNumber(17); sp.addNumber(9); sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
