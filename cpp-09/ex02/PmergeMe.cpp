/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:44:42 by ndiamant          #+#    #+#             */
/*   Updated: 2023/12/05 15:13:32 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	
}

PmergeMe::PmergeMe(int *arr, int size)
{
	this->_stack1 = std::vector<int>(arr, arr + size);
	this->_stack2 = std::deque<int>(arr, arr + size);
	this->_size = size;
}

PmergeMe::PmergeMe(const PmergeMe &pmergeme) : _stack1(pmergeme._stack1), _stack2(pmergeme._stack2), _size(pmergeme._size)
{
}

PmergeMe &PmergeMe::operator= (const PmergeMe &pmergeme)
{
	if (this != &pmergeme)
	{
		this->_stack1 = pmergeme._stack1;
		this->_stack2 = pmergeme._stack2;
		this->_size = pmergeme._size;
	}
	return (*this);
}

PmergeMe::~PmergeMe(void)
{
	
}

void	PmergeMe::displayBeforeSort(void)
{
	std::cout << std::endl << MAG << "Before sort: " << RESET;
	for (std::vector<int>::iterator it = this->_stack1.begin(); it != this->_stack1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::displayAfterSort(void)
{
	std::cout << std::endl << GREEN << "After sort: vector: " << RESET;
	for (std::vector<int>::iterator it = this->_stack1.begin(); it != this->_stack1.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl << GREEN << "After sort:  deque: " << RESET;
	for (std::deque<int>::iterator it = this->_stack2.begin(); it != this->_stack2.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::displayDuration(void)
{
	std::cout << std::endl << CYN << "Duration: vector: Time to process a range of "
		<< this->_size << " elements in " << this->_durationVector << " microseconds" << RESET;
	std::cout << std::endl << CYN << "Duration:  deque: Time to process a range of "
		<< this->_size << " elements in " << this->_durationDeque << " microseconds" << RESET;
	std::cout << std::endl;
}

void PmergeMe::mergeSortVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (end - begin > 1)
	{
		std::vector<int>::iterator middle = begin + (end - begin) / 2;
		mergeSortVector(begin, middle);
		mergeSortVector(middle, end);
		std::inplace_merge(begin, middle, end);
	}
}

void PmergeMe::mergeSortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	if (end - begin > 1)
	{
		std::deque<int>::iterator middle = begin + (end - begin) / 2;
		mergeSortDeque(begin, middle);
		mergeSortDeque(middle, end);
		std::inplace_merge(begin, middle, end);
	}
}

void PmergeMe::sortVector()
{
	clock_t	startTime = clock();
	mergeSortVector(this->_stack1.begin(), this->_stack1.end());
	clock_t	endTime = clock();
	this->_durationVector = 1000000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
}

void PmergeMe::sortDeque()
{
	clock_t	startTime = clock();
	mergeSortDeque(this->_stack2.begin(), this->_stack2.end());
	clock_t	endTime = clock();
	this->_durationDeque = 1000000.0 * (endTime - startTime) / CLOCKS_PER_SEC;
}
