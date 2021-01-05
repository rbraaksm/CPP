/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 10:00:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/05 12:25:51 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fxd_pnt = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructer called" << std::endl;
	*this = other;
}

Fixed & Fixed::operator=(const Fixed &other){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &other)
		return (*this);
    fxd_pnt = other.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fxd_pnt);
}

void	Fixed::setRawBits(int const raw){
	this->fxd_pnt = raw;
}


int		main(void){
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}