/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:55:27 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:14:02 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const name) : Victim(name){
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const Peon &cpy) : Victim(cpy){
	return ;
}

Peon& Peon::operator=(const Peon &nw){
	if (&nw != this)
		Victim::operator=(nw);
	return (*this);
}

Peon::~Peon(void){
	std::cout << "Blueark..." << std::endl;
	return ;
}
