/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:47:51 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:14:15 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::stringstream str;

	str << this;
	this->address = str.str();
	return ;
}

Brain::~Brain(){
	return ;
}

std::string Brain::identify(void){
	return (this->address);
}