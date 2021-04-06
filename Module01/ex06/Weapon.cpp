/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/30 15:57:04 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:49:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	return ;
}

Weapon::Weapon(std::string str)
{
	_type = str;
    return ;
}

Weapon::~Weapon(void){
	return ;
}

const std::string&	Weapon::getType(void){
	return (_type);
}

void	Weapon::setType(std::string type){
	_type = type;
}
