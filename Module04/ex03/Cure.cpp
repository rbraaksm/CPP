/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:06:16 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 12:08:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){
	return ;
}

Cure::~Cure(void){
	return ;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy){
	*this = cpy;
	return ;
}

Cure &		Cure::operator=(const Cure &nw){
	if (&nw != this){
		setXP(nw.getXP());
	}
	return (*this);
}

Cure*		Cure::clone(void) const{
	return (new Cure(*this));
}

void 		Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
