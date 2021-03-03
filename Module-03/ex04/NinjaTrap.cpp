/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 13:13:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/02/18 13:43:10 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

NinjaTrap::NinjaTrap(void){
	return ;
}

NinjaTrap::NinjaTrap(std::string const name){
	std::cout << "---NinjaTrap constructor---" << std::endl;
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap& cpy){
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_maxHitPoints = cpy._maxHitPoints;
	_energyPoints = cpy._energyPoints;
	_maxEnergyPoints = cpy._maxEnergyPoints;
	_level = cpy._level;
	_meleeAttackDamage = cpy._meleeAttackDamage;
	_rangedAttackDamage = cpy._rangedAttackDamage;
	_armorDamageReduction = cpy._armorDamageReduction;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const& nw){
	this->_name = nw._name;
	this->_hitPoints = nw._hitPoints;
	this->_maxHitPoints = nw._maxHitPoints;
	this->_energyPoints = nw._energyPoints;
	this->_maxEnergyPoints = nw._maxEnergyPoints;
	this->_level = nw._level;
	this->_meleeAttackDamage = nw._meleeAttackDamage;
	this->_rangedAttackDamage = nw._rangedAttackDamage;
	this->_armorDamageReduction = nw._armorDamageReduction;
	return (*this);
}

NinjaTrap::~NinjaTrap(void){
	std::cout << "---NinjaTrap destructor---" << std::endl;
	return ;
}

void	NinjaTrap::ninjaShoeBox(NinjaTrap const& target){
	std::cout << "Surprise!! " << target.getName() << " won a performance of JigglyPuff!!" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(ClapTrap const& target){
	std::cout << "Surprise!! " << target.getName() << " found a SuperPotion" << std::endl;
}

void	NinjaTrap::ninjaShoeBox(FragTrap const& target){
	std::cout << "Surprise!! " << target.getName() << " is doing the moonwalk very smooth" << std::endl;
}

unsigned int	NinjaTrap::getEP(void) const{
	return (_energyPoints);
}

unsigned int NinjaTrap::getMAD(void) const{
	return (_meleeAttackDamage);
}

void	NinjaTrap::meleeAttack(std::string const& target){
	std::cout << "used the SUPER melee attack on " << target << std::endl;
}