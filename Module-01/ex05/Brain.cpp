/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:47:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 10:24:39 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::stringstream str;

	str << this;
	_address = str.str();
	return ;
}

Brain::~Brain(){
	return ;
}

std::string Brain::identify(void) const{
	return (_address);
}