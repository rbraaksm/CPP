/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 12:50:45 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:49:38 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
	return ;
}

HumanB::HumanB(std::string name){
	_name = name;
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void	HumanB::setWeapon(Weapon& weapon){
	_weaponB = &weapon;
	return ;
}

void	HumanB::attack(void){
	std::cout << _name << " attacks with his " << _weaponB->getType();
    std::cout << std::endl;
}
