/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:04:09 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 16:59:50 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _n(0), _quantity(0)
{
}

Span::Span(const int number) : _n(number), _quantity(0)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &span) : _n(span._n), _quantity(span._quantity), _list(span._list)
{
}

Span		&Span::operator= (const Span &span)
{
	if (this != &span)
	{
		this->_quantity = span._quantity;
		this->_n = span._n;
		this->_list = span._list;
	}
	return (*this);
}

void	Span::addNumber(const int number)
{
	if (this->_n > this->_quantity)
	{
		this->_list.push_back(number);
		this->_quantity++;
	}
	else
		throw(std::out_of_range("Span is full"));
}

void	Span::fillNumbersRandom(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int>	tmp(begin, end);

	if (tmp.size() >= (this->_n - this->_list.size()))
		throw(std::out_of_range("Span is full"));
	std::copy(tmp.begin(), tmp.end(), std::back_inserter(this->_list));
	this->_quantity = this->_list.size();
}

int		Span::shortestSpan(void)
{
	int	shortest_span = MAX_INT;
	std::vector<int>::iterator it;

	if (this->_quantity == 0 || this->_quantity == 1)
	{
		throw(std::out_of_range("one or no numbers are stored in the list"));
	}

	for (it = this->_list.begin(); it != this->_list.end(); ++it)
	{
		if (*(it + 1))
		{
			if (std::abs(*(it + 1) - *it) < shortest_span)
				shortest_span = std::abs(*(it + 1) - *it);
		}
	}
	return (shortest_span);
}

int		Span::longestSpan(void)
{
	int	longest_span = 0;
	std::vector<int>::iterator it;

	if (this->_quantity == 0 || this->_quantity == 1)
	{
		throw(std::out_of_range("one or no numbers are stored in the list"));
	}

	for (it = this->_list.begin(); it != this->_list.end(); ++it)
	{
		if (*(it + 1))
		{
			if (std::abs(*(it + 1) - *it) > longest_span)
				longest_span = std::abs(*(it + 1) - *it);
		}
	}
	return (longest_span);
}
