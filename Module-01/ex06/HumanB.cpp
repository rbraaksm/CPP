/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 12:50:45 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 13:03:55 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name){
	this->name = _name;
	return ;
}

HumanB::~HumanB(void){
	return ;
}

void	HumanB::setWeapon(Weapon& _weapon){
	this->weaponB = &_weapon;
	return ;
}

void	HumanB::attack(void){
	std::cout << this->name << " attacks with his " << this->weaponB->getType();
    std::cout << std::endl;
}
