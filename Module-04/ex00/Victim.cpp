/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:13:14 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:37:37 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void){
	return ;
}

Victim::Victim(std::string const name): _name(name){
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(const Victim &cpy){
	*this = cpy;
	return ;
}

Victim& Victim::operator=(const Victim &nw){
	if (&nw != this)
		_name = nw._name;
	return (*this);
}

Victim::~Victim(void){
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
	return ;
}

void	Victim::getPolymorphed(void) const{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::string Victim::getName(void) const{
	return (_name);
}

std::ostream &operator<<(std::ostream &output, Victim const &nw){
	output << "I'm " << nw.getName() << " and I like otters" << std::endl;
	return (output);
}
