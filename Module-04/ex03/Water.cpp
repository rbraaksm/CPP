/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Water.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/04 11:41:08 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/03/04 13:55:37 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Water.hpp"

Water::Water(void) : AMateria("water"){
	return ;
}

Water::Water(const Water &cpy) : AMateria(cpy){
	*this = cpy;
	return ;
}

Water&	Water::operator=(const Water &nw){
	if(this != &nw){
		setXP(nw.getXP());
		setType(nw.getType());
	}
	return (*this);
}

Water::~Water(void){
	return ;
}

std::string const&	Water::getType(void) const{
	return (AMateria::getType());
}

unsigned int				Water::getXP(void) const{
	return (AMateria::getXP());
}

Water*	Water::clone(void) const{
	return new Water();
}

void	Water::use(ICharacter &target){
	setXP(AMateria::getXP() + 10);
	std::cout << "* Water the strength of a 1000 waterfalls pours down on " << target.getName() << " *" << std::endl;
	return ;
}
