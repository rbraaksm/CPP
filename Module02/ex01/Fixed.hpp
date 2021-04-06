/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 10:54:03 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/02/04 11:16:01 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	int					_fxd_pnt;
	static const int	_frac_bts = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& other);
		Fixed(const int n);
		Fixed(const float n);
		Fixed	&operator=(const Fixed& other);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif
