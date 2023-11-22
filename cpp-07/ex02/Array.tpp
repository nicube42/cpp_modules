/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 10:51:46 by ndiamant          #+#    #+#             */
/*   Updated: 2023/11/22 12:49:04 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
Array<T>::Array(void) : _array(nullptr), _n(0)
{
	std::cout << GREEN << "Creating array with default construcor" << RESET << std::endl;
}

template <class T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _n(n)
{
	std::cout << GREEN << "Creating array with n = " << n << RESET << std::endl;
}


template <class T>
Array<T>::Array(const Array &array) : _array(new T[array._n]), _n(array._n)
{
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		if (this->_array)
			delete [] this->_array;
		this->_n = other._n;
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_n || index < 0)
		throw(std::out_of_range(RED"out of range"RESET));
	return (_array[index]);
}

template <class T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_n || index < 0)
		throw(std::out_of_range(RED"out of range"RESET));
	return (_array[index]);
}

template <class T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <class T>
void	Array<T>::set_array(T toFill)
{
	for (unsigned int i = 0; i < this->_n; i++)
		this->_array[i] = toFill;
}

template <class T>
void	Array<T>::print_array(void)
{
	for (unsigned int i = 0; i < this->_n; i++)
		std::cout << this->_array[i] << " ";
}

template <class T>
unsigned int	Array<T>::size(void)
{
	return (this->_n);
}

