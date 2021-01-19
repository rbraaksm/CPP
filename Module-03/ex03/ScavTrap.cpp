/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:35:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:32:57 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){
	return ;
}

ScavTrap::ScavTrap(std::string _name){
	std::cout << CYA << "Mr. Oak wants to fight against the winner" << BLK << std::endl;
	this->_name = _name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergypoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	this->_tackleAttack = 5;
	this->_tailWhip = 0;
	this->_rollAttack = 15;
	this->_quickAttack = 10;
	this->_slamAttack = 50;
	this->_attack = 0;
	this->_C = CYA;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &nw){
	this->_name = nw._name;
	this->_hitPoints = nw._hitPoints;
	this->_maxHitPoints = nw._maxHitPoints;
	this->_energyPoints = nw._energyPoints;
	this->_maxEnergypoints = nw._maxEnergypoints;
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

ScavTrap::~ScavTrap(){
	std::cout << _C << "Mr. Oak is walking the walk of shame" << BLK << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target){
	this->_attack = 0;
	std::string attacker = "Muk";
	std::cout << _C << attacker << BLK << " used MELEE!" << std::endl;
	printMissed(attacker, target);
	this->_energyPoints -= (this->_meleeAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << this->_meleeAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target){
	this->_attack = 0;
	std::string attacker = "Muk";
	std::cout << _C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	printMissed(attacker, target);
	this->_energyPoints -= (this->_rangedAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << this->_rangedAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	std::string attacker = "Muk";
	if (this->_hitPoints <= amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	if (this->_hitPoints == 0){
		std::cout << std::endl << _C << this->_name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << attacker << BLK << std::endl;
		return ;
	}
}

void	ScavTrap::challengeNewcomer(std::string const &target){
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
