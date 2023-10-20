/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:19:59 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 10:53:24 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int integer) : _value(integer << _fractional_bits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating) : _value((int)roundf(floating *(1 << _fractional_bits)))
{
	//std::cout << "Float constructor called" << std::endl;
}



Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}



Fixed &Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

bool Fixed::operator> (const Fixed &rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool Fixed::operator>= (const Fixed &rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool Fixed::operator< (const Fixed &rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool Fixed::operator<= (const Fixed &rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool Fixed::operator== (const Fixed &rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool Fixed::operator!= (const Fixed &rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+ (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator- (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator* (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++ (void)
{
	(this->_value)++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed	tmp = *this;

	(this->_value)++;
	return (tmp);
}


Fixed &Fixed::operator-- (void)
{
	(this->_value)--;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed	tmp = *this;

	(this->_value)--;
	return (tmp);
}



int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractional_bits));
}
int		Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->_value / (1 << this->_fractional_bits))));
}



Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);	
}

const Fixed	Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 < fixed2 ? fixed1 : fixed2);	
}

Fixed	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);	
}

const Fixed	Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	return (fixed1 > fixed2 ? fixed1 : fixed2);	
}




std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
