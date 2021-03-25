/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 10:38:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:17:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title): _name(name), _title(title){
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer &cpy){
	*this = cpy;
	return ;
}

Sorcerer& Sorcerer::operator=(const Sorcerer &nw){
	if (&nw != this){
		_name = nw._name;
		_title = nw._title;
	}
	return (*this);
}

Sorcerer::~Sorcerer(void){
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

std::string	Sorcerer::getName(void) const{
	return (_name);
}

std::string	Sorcerer::getTitle(void) const{
	return (_title);
}

void	Sorcerer::polymorph(Victim const &vic) const{
	vic.getPolymorphed();
	return ;
}

std::ostream &operator<<(std::ostream &output, Sorcerer const &nw){
	output << "I am " << nw.getName() << ", " << nw.getTitle() << ", and I like ponies!" << std::endl;
	return (output);
}
