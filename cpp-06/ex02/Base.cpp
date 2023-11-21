/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 09:53:29 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/21 10:49:38 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
		
Base::Base(void)
{
	std::cout << "Base instanciated" << std::endl;
}
Base::~Base(void)
{
	std::cout << "Base destroyed" << std::endl;
}

Base	*Base::generate(void)
{
	Base *toGenerate;
	srand(time(NULL));
	int random_number = rand() % 3;
	
	if (random_number == 0)
		toGenerate = new A();
	else if (random_number == 1)
		toGenerate = new B();
	else
		toGenerate = new C();
	return (toGenerate);
}

void	Base::identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The actual type of p is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The actual type of p is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The actual type of p is C" << std::endl;
	else
		throw (WrongClassException());
}

void	Base::identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "The actual type of p is A" << std::endl;
	}
	catch(...)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "The actual type of p is B" << std::endl;
		}
		catch(...)
		{
				try
				{
					(void)dynamic_cast<C&>(p);
					std::cout << "The actual type of p is C" << std::endl;
				}
				catch(...)
				{
					throw (WrongClassException());
				}
		}
	}
}
