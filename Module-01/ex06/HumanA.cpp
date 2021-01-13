/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 10:58:35 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:49:30 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon): _name(_name), _weaponA(_weapon){
	return ;
}

HumanA::~HumanA(){
	return ;
}

void	HumanA::attack(void){
	std::cout << _name << " attacks with his " << _weaponA.getType();
    std::cout << std::endl;
}
