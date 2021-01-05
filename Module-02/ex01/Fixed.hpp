/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 10:54:03 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/05 13:44:01 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{
	private:
	int					fxd_pnt;
	static const int	frac_bts = 8;

	public:
	Fixed();
	~Fixed();
	Fixed(const Fixed&);
	Fixed(const int);
	Fixed(const float);
	Fixed				&operator=(const Fixed&);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

};

std::ostream &operator<<(std::ostream&, const Fixed&);
#endif
