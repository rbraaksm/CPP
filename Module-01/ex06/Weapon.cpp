/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/30 15:57:04 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 13:02:09 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	this->type = str;
    return ;
}

Weapon::~Weapon(void){
	return ;
}

const std::string&	Weapon::getType(void){
	return (this->type);
}

void	Weapon::setType(std::string type){
	this->type = type;
}
