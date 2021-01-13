/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:35:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:47:26 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	return ;
}

ScavTrap::ScavTrap(std::string name){
	std::cout << CYA << "Mr. Oak wants to fight against the winner" << BLK << std::endl;
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergypoints = 100;
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

ScavTrap & ScavTrap::operator=(ScavTrap const &nw){
	_name = nw._name;
	_hitPoints = nw._hitPoints;
	_maxHitPoints = nw._maxHitPoints;
	_energyPoints = nw._energyPoints;
	_maxEnergypoints = nw._maxEnergypoints;
	_level = nw._level;
	_meleeAttackDamage = nw._meleeAttackDamage;
	_rangedAttackDamage = nw._rangedAttackDamage;
	_armorDamageReduction = nw._armorDamageReduction;
	_tackleAttack = nw._tackleAttack;
	_tailWhip = nw._tailWhip;
	_rollAttack = nw._rollAttack;
	_quickAttack = nw._quickAttack;
	_slamAttack = nw._slamAttack;
	_C = nw._C;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << _C << "Mr. Oak is walking the walk of shame" << BLK << std::endl;
	return ;
}

void	ScavTrap::printStatus(int n){
	std::string COL;
	if ((n == 0 && _hitPoints > 55) || (n == 1 && _energyPoints > 55))
		COL = GRN;
	else if ((n == 0 && _hitPoints > 25) || (n == 1 && _energyPoints > 25))
		COL = YEL;
	else
		COL = RED;
	if (n == 0)
		std::cout << " (" << COL << _hitPoints << BLK << "/100)";
	else
		std::cout << " (" << COL << _energyPoints << BLK << "/100)";
}

void	ScavTrap::printMissed(std::string attacker, std::string target){
	std::string color = YEL;
	if (attacker == "Muk")
		color = CYA;
	else if (attacker == "Blastoise")
		color = BLU;
	if (target == "Pikachu")
		std::cout << color << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "Blastoise")
		std::cout << color << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target){
	_attack = 0;
	std::string attacker = "Muk";
	std::cout << _C << attacker << BLK << " used MELEE!" << std::endl;
	printMissed(attacker, target);
	_energyPoints -= (_meleeAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << _meleeAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target){
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

void	ScavTrap::beRepaired(unsigned int amount){
	std::string C = _C;
	unsigned int n = _hitPoints + amount;
	if (n - amount == 100)
		n = 0;
	else if (n >= _maxHitPoints)
		n = amount - (n - _maxHitPoints);
	else
		n = amount;
	_hitPoints += n;
	std::cout << _C << _name << "'s" << BLK;
	printStatus(0);
	if (n == 0)
		std::cout << " hitpoints aren't increased, because his HP is full!" << std::endl;
	else
		std::cout << " hitpoints are increased by " << GRN << n << BLK << std::endl;
	std::cout << std::endl;
}