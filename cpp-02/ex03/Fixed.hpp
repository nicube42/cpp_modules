/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:20:21 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/20 09:20:36 by ndiamant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed
{
	private:
		int					_value;
		const static int	_fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed(const Fixed &fixed);

		~Fixed(void);

		Fixed &operator= (const Fixed &fixed);

		bool operator> (const Fixed &rhs) const;
		bool operator>= (const Fixed &rhs) const;
		bool operator< (const Fixed &rhs) const;
		bool operator<= (const Fixed &rhs) const;
		bool operator== (const Fixed &rhs) const;
		bool operator!= (const Fixed &rhs) const;

		Fixed operator+ (const Fixed &rhs) const;
		Fixed operator- (const Fixed &rhs) const;
		Fixed operator* (const Fixed &rhs) const;
		Fixed operator/ (const Fixed &rhs) const;

		Fixed &operator++ (void);
		Fixed operator++ (int);
		Fixed &operator-- (void);
		Fixed operator-- (int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed		min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed		max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
