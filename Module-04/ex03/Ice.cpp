/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 11:51:32 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 13:55:05 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){
	return ;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy){
	*this = cpy;
	return ;
}

Ice&	Ice::operator=(const Ice &nw){
	if(this != &nw){
		setXP(nw.getXP());
		setType(nw.getType());
	}
	return *this;
}

Ice::~Ice(void){
	return ;
}

Ice*					Ice::clone(void) const{
	return new Ice();
}

void 		Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}