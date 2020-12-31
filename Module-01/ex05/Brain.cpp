/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:47:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/27 23:08:25 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::stringstream str;

	str << this;
	this->address = str.str();
	return ;
}

Brain::~Brain(void){
	return ;
}

std::string Brain::identify(void){
	return (this->address);
}