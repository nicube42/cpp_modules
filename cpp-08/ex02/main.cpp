/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:03:45 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/23 12:04:55 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

	/*----------------------- original main of subject ---------------------------*/

	std::cout << GREEN << "MutantStack tests" << RESET << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack);

	std::cout << std::endl << std::endl << std::endl;

	/*----------------------- Compare with list container ---------------------------*/

	std::cout << GREEN << "list container tests" << RESET << std::endl;

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);

	// Display the last element
	std::cout << lst.back() << std::endl;

	// Remove the last element
	lst.pop_back();

	// Display the size
	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);

	for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << std::endl;

	return 0;
}
