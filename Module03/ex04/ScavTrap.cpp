/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:35:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/02/18 12:54:57 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void){
	return ;
}

ScavTrap::ScavTrap(std::string const name){
	std::cout << "---ScavTrap constructor---" << std::endl;
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_tackleAttack = 5;
	_tailWhip = 0;
	_rollAttack = 15;
	_quickAttack = 10;
	_slamAttack = 50;
	_attack = 0;
	_C = CYA;
}

ScavTrap::ScavTrap(const ScavTrap& cpy){
	_name = cpy._name;
	_hitPoints = cpy._hitPoints;
	_maxHitPoints = cpy._maxHitPoints;
	_energyPoints = cpy._energyPoints;
	_maxEnergyPoints = cpy._maxEnergyPoints;
	_level = cpy._level;
	_meleeAttackDamage = cpy._meleeAttackDamage;
	_rangedAttackDamage = cpy._rangedAttackDamage;
	_armorDamageReduction = cpy._armorDamageReduction;
	_tackleAttack = cpy._tackleAttack;
	_tailWhip = cpy._tailWhip;
	_rollAttack = cpy._rollAttack;
	_quickAttack = cpy._quickAttack;
	_slamAttack = cpy._slamAttack;
	_C = cpy._C;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& nw){
	this->_name = nw._name;
	this->_hitPoints = nw._hitPoints;
	this->_maxHitPoints = nw._maxHitPoints;
	this->_energyPoints = nw._energyPoints;
	this->_maxEnergyPoints = nw._maxEnergyPoints;
	this->_level = nw._level;
	this->_meleeAttackDamage = nw._meleeAttackDamage;
	this->_rangedAttackDamage = nw._rangedAttackDamage;
	this->_armorDamageReduction = nw._armorDamageReduction;
	this->_tackleAttack = nw._tackleAttack;
	this->_tailWhip = nw._tailWhip;
	this->_rollAttack = nw._rollAttack;
	this->_quickAttack = nw._quickAttack;
	this->_slamAttack = nw._slamAttack;
	this->_C = nw._C;
	return (*this);
}

ScavTrap::~ScavTrap(void){
	std::cout << "---ScavTrap destructor---" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const& target){
	_attack = 0;
	std::string attacker = "Muk";
	std::cout << _C << attacker << BLK << " used MELEE!" << std::endl;
	printMissed(attacker, target);
	_energyPoints -= (_meleeAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << _meleeAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::rangedAttack(std::string const& target){
	_attack = 0;
	std::string attacker = "Muk";
	std::cout << _C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	printMissed(attacker, target);
	_energyPoints -= (_rangedAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << _rangedAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	std::string attacker = "Muk";
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	if (_hitPoints == 0){
		std::cout << std::endl << _C << _name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << attacker << BLK << std::endl;
		return ;
	}
}

void	ScavTrap::challengeNewcomer(std::string const& target){
	std::string color = (target == "Pikachu" ? YEL : BLU);
	int	d = rand() % 5;
	std::string attacker = "Muk";
	std::string attackType[] = {
		" is eating mr. Oak",
		" went to the toilet",
		" gave his opponent a very big kiss",
		" is cooking a meal for everyone",
		" is dancing the moonwalk"};
	std::cout << _C << attacker << BLK << attackType[d] << "!" << std::endl;
	std::cout << color << target << BLK << " lies on the floor laughing" << std::endl;
}
