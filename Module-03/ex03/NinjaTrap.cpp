/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 13:13:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/14 15:35:09 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(void){
	return ;
}

NinjaTrap::NinjaTrap(std::string name){
	std::cout << "AAAAAAA NINJA!!" << std::endl;
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergypoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::~NinjaTrap(void){
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const &nw){
	this->_name = nw._name;
	this->_hitPoints = nw._hitPoints;
	this->_maxHitPoints = nw._maxHitPoints;
	this->_energyPoints = nw._energyPoints;
	this->_maxEnergypoints = nw._maxEnergypoints;
	this->_level = nw._level;
	this->_meleeAttackDamage = nw._meleeAttackDamage;
	this->_rangedAttackDamage = nw._rangedAttackDamage;
	this->_armorDamageReduction = nw._armorDamageReduction;
	return (*this);
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap const &target){
	std::cout << "Surprise!! " << target.getName() << " won a performance of JigglyPuff!!" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const &target){
	std::cout << "Surprise!! " << target.getName() << " found a SuperPotion" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap const &target){
	std::cout << "Surprise!! " << target.getName() << " is doing the moonwalk very smooth" << std::endl;
}
