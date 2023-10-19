/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndiamant <ndiamant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:36:09 by ndiamant          #+#    #+#             */
/*   Updated: 2023/10/19 11:38:25 by ndiamant         ###   ########.fr       */
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
		Fixed(Fixed &fixed);
		~Fixed(void);
		Fixed &operator=(Fixed &fixed);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
