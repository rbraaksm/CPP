/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 10:58:35 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:22:04 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon): name(_name), weaponA(_weapon){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::attack(void){
	std::cout << this->name << " attacks with his " << this->weaponA.getType();
    std::cout << std::endl;
}
