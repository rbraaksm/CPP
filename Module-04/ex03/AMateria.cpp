/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 11:29:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 12:00:29 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void){
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0){
	return ;
}

AMateria::AMateria(const AMateria &cpy){
	*this = cpy;
	return ;
}

AMateria&	AMateria::operator=(const AMateria &nw){
	if(this != &nw)
	{
		this->_xp = nw._xp;
		this->_type = nw._type;
	}
	return *this;
}

AMateria::~AMateria(void){
	return ;
}

std::string const&	AMateria::getType(void) const{
	return (_type);
}

unsigned int	AMateria::getXP(void) const{
	return (_xp);
}

void	AMateria::setXP(unsigned int xp){
	_xp = xp;
	return ;
}

void	AMateria::setType(std::string type){
	_type = type;
	return ;
}

void	AMateria::use(ICharacter &target){
	_xp += 10;
	(void)target;
	return ;
}
