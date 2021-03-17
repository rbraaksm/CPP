/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:37:10 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/17 14:15:42 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void){
}

SuperTrap::SuperTrap(std::string const name) : FragTrap(name), NinjaTrap(name){
	std::cout << "---SuperTrap constructor---" << std::endl;
	_name = name;
	_hitPoints = FragTrap::getHP();
	_energyPoints = NinjaTrap::getEP();
	_maxHitPoints = _hitPoints;
	_maxEnergyPoints = _energyPoints;
	_level = 1;
	_meleeAttackDamage = NinjaTrap::getMAD();
	_rangedAttackDamage = FragTrap::getRAD();
	_armorDamageReduction = FragTrap::getDR();
}

SuperTrap::SuperTrap(const SuperTrap& cpy) : FragTrap(cpy), NinjaTrap(cpy) {
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

SuperTrap & SuperTrap::operator=(SuperTrap const& other){
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_maxHitPoints = other._maxHitPoints;
	this->_energyPoints = other._energyPoints;
	this->_maxEnergyPoints = other._maxEnergyPoints;
	this->_level = other._level;
	this->_meleeAttackDamage = other._meleeAttackDamage;
	this->_rangedAttackDamage = other._rangedAttackDamage;
	this->_armorDamageReduction = other._armorDamageReduction;
	return (*this);
}

SuperTrap::~SuperTrap(void){
	std::cout << "---SuperTrap destructor---" << std::endl;
	return ;
}

void	SuperTrap::meleeAttack(std::string const& target){
	std::cout << RED << "Charizard " << BLK;
	return (NinjaTrap::meleeAttack(target));
}

void	SuperTrap::rangedAttack(std::string const& target){
	return (FragTrap::rangedAttack(target));
}