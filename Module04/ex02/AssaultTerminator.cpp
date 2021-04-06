/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:48:04 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 10:54:15 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void){
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::~AssaultTerminator(void){
	std::cout << "I'll be back..." << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &cpy){
	std::cout << "Copy constructor used." << std::endl;
	*this = cpy;
	return;
}

AssaultTerminator&		AssaultTerminator::operator=(const AssaultTerminator &obj){
	if(this != &obj)
		std::cout << "Nothing to do here." << std::endl;
	return *this;

}

AssaultTerminator*		AssaultTerminator::clone(void) const{
	std::cout << "cloning Assault Terminator..." << std::endl;
	return new AssaultTerminator(*this);
}

void				AssaultTerminator::battleCry(void) const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	return;
}

void				AssaultTerminator::rangedAttack(void) const{
	std::cout << "* does nothing *" << std::endl;
	return;
}

void				AssaultTerminator::meleeAttack(void) const{
	std::cout << "* attacks with chainfists *" << std::endl;
	return;
}
