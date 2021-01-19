/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 11:05:56 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/18 12:18:56 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	_fxd_pnt = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructer called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int n){
	std::cout << "Int constructor called" << std::endl;
	_fxd_pnt = n << _frac_bts;
}

Fixed::Fixed(const float n){
	std::cout << "Float constructor called" << std::endl;
	_fxd_pnt = roundf(n * (1 << _frac_bts));
}

Fixed & Fixed::operator=(const Fixed &other){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
    _fxd_pnt = other.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fxd_pnt);
}

void	Fixed::setRawBits(int const raw){
	_fxd_pnt = raw;
}

float	Fixed::toFloat(void) const{
	float a;
	a = (float)_fxd_pnt / (1 << _frac_bts);
	return (a);
}

int		Fixed::toInt(void) const{
	int a;
	a = _fxd_pnt >> _frac_bts;
	return (a);
}

std::ostream &operator<<(std::ostream &output, Fixed const &nb)
{
    output << nb.toFloat();
    return (output);
}

int		main(void){
    Fixed       a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );

    a = Fixed( 1234.4321f );

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return (0);
}
