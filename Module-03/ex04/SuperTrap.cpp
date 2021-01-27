/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:37:10 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/20 13:08:38 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void){
}

SuperTrap::SuperTrap(std::string const name){
	_name = name;
	_hitPoints = FragTrap::getHP();
	_energyPoints = NinjaTrap::getEP();
	_maxHitPoints = _hitPoints;
	_maxEnergyPoints = _energyPoints;
	_level = 1;
	_meleeAttackDamage = NinjaTrap::getMAD();
	_meleeAttackDamage = FragTrap::getRAD();
	_armorDamageReduction = FragTrap::getDR();
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

}