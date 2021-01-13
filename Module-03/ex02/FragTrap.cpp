/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:44:15 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	return ;
}

FragTrap::FragTrap(std::string name){
	if (name == "Pikachu")
		std::cout << YEL << name << "!" << RED << "   I choose you!!    " << BLK "<" << YEL << "Pikachu" << BLK << ">" << YEL << " PIKA PIKA" << BLK << std::endl;
	else
		std::cout << BLU << name << "!" << RED << " I choose you!!    " << BLK << "<" << BLU << "Blastoise" << BLK << ">" << BLU << " BLASTOIIISE" << BLK << std::endl;
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
	if (name == "Pikachu")
		_C = YEL;
	else
		_C = BLU;
}

FragTrap & FragTrap::operator=(FragTrap const &nw){
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

FragTrap::~FragTrap(){
	std::cout << "<" << _C << this->_name << BLK << ">";
	if (this->_hitPoints == 0)
		std::cout << " Let's go the Pokémon Center!!" << std::endl;
	else
		std::cout << " EASY WIN!!" << std::endl;
	return ;
}

std::string	FragTrap::getPokemon(){
	return (this->_name);
}

int		FragTrap::getHP(){
	return (this->_hitPoints);
}

int		FragTrap::getReduction(){
	return (this->_armorDamageReduction);
}

unsigned int		FragTrap::getDamage(){
	return (this->_attack);
}

unsigned int		FragTrap::setDamage(int i){
	if (i == 0)
		return (this->_meleeAttackDamage);
	else if (i == 1)
		return (this->_rangedAttackDamage);
	else if (i == 2)
		return (this->_tackleAttack);
	else if (i == 3)
		return (this->_tailWhip);
	else if (i == 4)
		return (this->_rollAttack);
	else if (i == 5)
		return (this->_quickAttack);
	else
		return (this->_slamAttack);
}

void	FragTrap::reduceEnergy(){
	unsigned int n = this->_energyPoints + 10;
	if (n + 10 == 100)
		n = 0;
	else if (n >= this->_maxHitPoints)
		n = 10 - (n - this->_maxHitPoints);
	else
		n = 10;
	this->_energyPoints += n;
}

void	FragTrap::printAttack(std::string attacker, std::string target, int amount){
	if (target == "Pikachu")
		std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (target == "Blastoise")
		std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	std::cout << _C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	this->_attack = 0;
	if (i > 0)
		this->_attack = setDamage(0);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::cout << _C << attacker << BLK << " used MELEE!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->_attack);
	else
		printMissed(attacker, target);
	this->_energyPoints -= (this->_meleeAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << this->_meleeAttackDamage / 2 << BLK << std::endl;
	beRepaired(this->_armorDamageReduction);
}

void	FragTrap::rangedAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	this->_attack = 0;
	if (i > 0)
		this->_attack = setDamage(1);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::cout << _C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->_attack);
	else
		printMissed(attacker, target);
	this->_energyPoints -= (this->_rangedAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout << " energyPoints are reduced by " << RED << this->_rangedAttackDamage / 2 << BLK << std::endl;
	beRepaired(this->_armorDamageReduction);
}

void	FragTrap::takeDamage(unsigned int amount){
	std::string attacker = (this->_name == "Pikachu" ? "Blastoise" : "Pikachu");
	std::string color = (this->_name == "Pikachu" ? BLU : YEL);
	if (this->_hitPoints <= amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	if (this->_hitPoints == 0){
		std::cout << std::endl << _C << this->_name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << color << attacker << BLK << std::endl << std::endl;
		return ;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target){
	int i = rand() % 2;
	int	d = rand() % 5;
	reduceEnergy();
	this->_attack = 0;
	if (i > 0)
		this->_attack = setDamage(d + 2);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::string attackType[] = {"TACKLE", "tailWhip", "ROLL", "quickAttack", "SLAM"};
	if ((this->_energyPoints - (this->_energyPoints / 2)) < 0){
		std::cout << _C << attacker << BLK << " cannot use " << attackType[d] << " because EnergyPoint are too low!" << std::endl;
		return ;
	}
	std::cout << _C << attacker << BLK << " used " << attackType[d] << "!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->_attack);
	else
		printMissed(attacker, target);
	this->_energyPoints -= (this->_attack / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout << " energyPoints are reduced by " << RED << this->_attack / 2 << BLK << std::endl;
	beRepaired(this->_armorDamageReduction);
}
