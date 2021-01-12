/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   oldScavTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:35:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/12 15:26:50 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	return ;
}

ScavTrap::ScavTrap(std::string _name){
	std::cout << CYA << "Mr. Oak wants to fight against the winner" << BLK << std::endl;
	this->name = _name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergypoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->tackleAttack = 5;
	this->tailWhip = 0;
	this->rollAttack = 15;
	this->quickAttack = 10;
	this->slamAttack = 50;
	this->attack = 0;
	this->C = CYA;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &nw){
	this->name = nw.name;
	this->hitPoints = nw.hitPoints;
	this->maxHitPoints = nw.maxHitPoints;
	this->energyPoints = nw.energyPoints;
	this->maxEnergypoints = nw.maxEnergypoints;
	this->level = nw.level;
	this->meleeAttackDamage = nw.meleeAttackDamage;
	this->rangedAttackDamage = nw.rangedAttackDamage;
	this->armorDamageReduction = nw.armorDamageReduction;
	this->tackleAttack = nw.tackleAttack;
	this->tailWhip = nw.tailWhip;
	this->rollAttack = nw.rollAttack;
	this->quickAttack = nw.quickAttack;
	this->slamAttack = nw.slamAttack;
	this->C = nw.C;
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << C << "Mr. Oak is walking the walk of shame" << BLK << std::endl;
	return ;
}

std::string	ScavTrap::getPokemon(){
	return (this->name);
}

int		ScavTrap::getHP(){
	return (this->hitPoints);
}

int		ScavTrap::getReduction(){
	return (this->armorDamageReduction);
}

void	ScavTrap::beRepaired(unsigned int amount){
	std::string C = this->C;
	unsigned int n = this->hitPoints + amount;
	if (n - amount == 100)
		n = 0;
	else if (n >= this->maxHitPoints)
		n = amount - (n - this->maxHitPoints);
	else
		n = amount;
	this->hitPoints += n;
	if (n == 0)
		std::cout << C << this->name << "'s" << BLK << " hitpoints aren't increased, because his HP is full!" << std::endl;
	else
		std::cout << C << this->name << "'s" << BLK << " hitpoints are increased by " << GRN << n << BLK << std::endl;
}

unsigned int		ScavTrap::getDamage(){
	return (this->attack);
}

unsigned int		ScavTrap::setDamage(int i){
	if (i == 0)
		return (this->meleeAttackDamage);
	else if (i == 1)
		return (this->rangedAttackDamage);
	else if (i == 2)
		return (this->tackleAttack);
	else if (i == 3)
		return (this->tailWhip);
	else if (i == 4)
		return (this->rollAttack);
	else if (i == 5)
		return (this->quickAttack);
	else
		return (this->slamAttack);
}

void	ScavTrap::reduceEnergy(){
	unsigned int n = this->energyPoints + 10;
	if (n + 10 == 100)
		n = 0;
	else if (n >= this->maxHitPoints)
		n = 10 - (n - this->maxHitPoints);
	else
		n = 10;
	this->energyPoints += n;
}

void	ScavTrap::printStatus(int n){
	std::string COL;
	if ((n == 0 && this->hitPoints > 55) || (n == 1 && this->energyPoints > 55))
		COL = GRN;
	else if ((n == 0 && this->hitPoints > 25) || (n == 1 && this->energyPoints > 25))
		COL = YEL;
	else
		COL = RED;
	if (n == 0)
		std::cout << " (" << COL << this->hitPoints << BLK << "/100)";
	else
		std::cout << " (" << COL << this->energyPoints << BLK << "/100)";
}

void	ScavTrap::printAttack(std::string attacker, std::string target, int amount){
	if (target == "Pikachu")
		std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (target == "Blastoise")
		std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	std::cout << C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
}

static void	printMissed(std::string attacker, std::string target){
	if (target == "Pikachu")
		std::cout << CYA << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "Blastoise")
		std::cout << CYA << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target){
	this->attack = 0;
	std::string attacker = "Muk";
	std::cout << C << attacker << BLK << " used MELEE!" << std::endl;
	printMissed(attacker, target);
	this->energyPoints -= (this->meleeAttackDamage / 2);
	std::cout << C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << this->meleeAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target){
	this->attack = 0;
	std::string attacker = "Muk";
	std::cout << C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	printMissed(attacker, target);
	this->energyPoints -= (this->rangedAttackDamage / 2);
	std::cout << C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << this->rangedAttackDamage / 2 << BLK << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	std::string attacker = "Muk";
	if (this->hitPoints <= amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	if (this->hitPoints == 0){
		std::cout << std::endl << C << this->name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << attacker << BLK << std::endl;
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
	std::cout << C << attacker << BLK << attackType[d] << "!" << std::endl;
	std::cout << color << target << BLK << " lies on the floor laughing" << std::endl;
}
