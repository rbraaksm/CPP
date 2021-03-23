/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:59:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "---FragTrap constructor---" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "---FragTrap constructor---" << std::endl;
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
	_C = BLK;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy){
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

FragTrap & FragTrap::operator=(const FragTrap& nw){
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

FragTrap::~FragTrap(void){
	std::cout << "---FragTrap destructor---" << std::endl;
	return ;
}

std::string	FragTrap::getPokemon(void) const{
	return (_name);
}

int		FragTrap::getHP(void) const{
	return (_hitPoints);
}

int		FragTrap::getReduction(void) const{
	return (_armorDamageReduction);
}

unsigned int		FragTrap::getDamage(void) const{
	return (_attack);
}

unsigned int		FragTrap::setDamage(int i){
	if (i == 0)
		return (_meleeAttackDamage);
	else if (i == 1)
		return (_rangedAttackDamage);
	else if (i == 2)
		return (_tackleAttack);
	else if (i == 3)
		return (_tailWhip);
	else if (i == 4)
		return (_rollAttack);
	else if (i == 5)
		return (_quickAttack);
	else
		return (_slamAttack);
}

void	FragTrap::reduceEnergy(void){
	unsigned int n = _energyPoints + 10;
	if (n + 10 == 100)
		n = 0;
	else if (n >= _maxHitPoints)
		n = 10 - (n - _maxHitPoints);
	else
		n = 10;
	_energyPoints += n;
}

void	FragTrap::printAttack(std::string attacker, std::string target, int amount){
	if (attacker == "Pikachu")
		std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (attacker == "Blastoise")
		std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (target == "Charizard")
		std::cout <<  " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	std::cout << _C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target){
	int i = rand() % 2;
	reduceEnergy();
	_attack = 0;
	_C = YEL;
	if (i > 0)
		_attack = setDamage(0);
	std::string attacker = "Pikachu";
	std::cout << _C << attacker << BLK << " used MELEE!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, _attack);
	else
		printMissed(attacker, target);
	_energyPoints -= (_meleeAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout <<  " energyPoints are reduced by " << RED << _meleeAttackDamage / 2 << BLK << std::endl;
	beRepaired(_armorDamageReduction);
}

void	FragTrap::rangedAttack(std::string const& target){
	int i = rand() % 2;
	reduceEnergy();
	_attack = 0;
	_C = BLU;
	if (i > 0)
		_attack = setDamage(1);
	std::string attacker = "Blastoise";
	if (target == "Blastoise"){
		attacker = "Charizard";
		_C = RED;
	}
	std::cout << _C << attacker << BLK << " used a RANGED ATTACK on " << target << std::endl;
	if (i > 0)
		printAttack(attacker, target, _attack);
	else
		printMissed(attacker, target);
	_energyPoints -= (_rangedAttackDamage / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout << " energyPoints are reduced by " << RED << _rangedAttackDamage / 2 << BLK << std::endl;
	beRepaired(_armorDamageReduction);
}

void	FragTrap::takeDamage(unsigned int amount){
	std::string attacker = (_name == "Pikachu" ? "Blastoise" : "Pikachu");
	std::string color = (_name == "Pikachu" ? BLU : YEL);
	if (_hitPoints <= amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	if (_hitPoints == 0){
		std::cout << std::endl << _C << _name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << color << attacker << BLK << std::endl << std::endl;
		return ;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target){
	int i = rand() % 2;
	int	d = rand() % 5;
	reduceEnergy();
	_attack = 0;
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::string attackType[] = {"TACKLE", "tailWhip", "ROLL", "quickAttack", "SLAM"};
	if (_energyPoints < 25){
		std::cout << _C << attacker << BLK << " cannot use " << attackType[d] << " because energyPoints are too low!" << std::endl;
		std::cout << _C << attacker << BLK << " energyPoints are increased by 10" << std::endl << std::endl;
		reduceEnergy();
		return ;
	}
	if (i > 0)
		_attack = setDamage(d + 2);
	std::cout << _C << attacker << BLK << " used " << attackType[d] << "!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, _attack);
	else
		printMissed(attacker, target);
	if (_energyPoints > 25)
		_energyPoints -= 25;
	else
		_energyPoints = 0;
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout << " energyPoints are reduced by " << RED << "25" << BLK << std::endl;
	beRepaired(_armorDamageReduction);
}

unsigned int	FragTrap::getRAD(void) const{
	return (_rangedAttackDamage);
}

unsigned int	FragTrap::getDR(void) const{
	return (_armorDamageReduction);
}
