/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 10:00:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/05 10:34:36 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
	int					fxd_pnt;
	static const int	frac_bts = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed &operator=(const Fixed&);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};
#endif
