/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 14:46:34 by rbraaksm      ########   odam.nl         */
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

FragTrap::~FragTrap(){
	std::cout << "<" << _C << _name << BLK << ">";
	if (_hitPoints == 0)
		std::cout << " Let's go the Pokémon Center!!" << std::endl;
	else
		std::cout << " EASY WIN!!" << std::endl;
	return ;
}

std::string	FragTrap::getPokemon(){
	return (_name);
}

int		FragTrap::getHP(){
	return (_hitPoints);
}

int		FragTrap::getReduction(){
	return (_armorDamageReduction);
}

void	FragTrap::beRepaired(unsigned int amount){
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

unsigned int		FragTrap::getDamage(){
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

void	FragTrap::reduceEnergy(){
	unsigned int n = _energyPoints + 10;
	if (n + 10 == 100)
		n = 0;
	else if (n >= _maxHitPoints)
		n = 10 - (n - _maxHitPoints);
	else
		n = 10;
	_energyPoints += n;
}

void	FragTrap::printStatus(int n){
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

void	FragTrap::printAttack(std::string attacker, std::string target, int amount){
	if (target == "Pikachu")
		std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (target == "Blastoise")
		std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	std::cout << _C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
}

void	FragTrap::printMissed(std::string attacker, std::string target){
	std::string color = YEL;
	if (attacker == "Muk")
		color = CYA;
	else if (attacker == "Blastoise")
		color = BLU;
	if (target == "Pikachu")
		std::cout << BLU << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "Blastoise")
		std::cout << YEL << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	_attack = 0;
	if (i > 0)
		_attack = setDamage(0);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
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

void	FragTrap::rangedAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	_attack = 0;
	if (i > 0)
		_attack = setDamage(1);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::cout << _C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
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

void	FragTrap::vaulthunter_dot_exe(std::string const &target){
	int i = rand() % 2;
	int	d = rand() % 5;
	reduceEnergy();
	_attack = 0;
	if (i > 0)
		_attack = setDamage(d + 2);
	std::string attacker = (target == "Pikachu" ? "Blastoise" : "Pikachu");
	std::string attackType[] = {"TACKLE", "tailWhip", "ROLL", "quickAttack", "SLAM"};
	if ((_energyPoints - (_energyPoints / 2)) < 0){
		std::cout << _C << attacker << BLK << " cannot use " << attackType[d] << " because EnergyPoint are too low!" << std::endl;
		return ;
	}
	std::cout << _C << attacker << BLK << " used " << attackType[d] << "!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, _attack);
	else
		printMissed(attacker, target);
	_energyPoints -= (_attack / 2);
	std::cout << _C << attacker << "'s" << BLK;
	printStatus(1);
	std::cout << " energyPoints are reduced by " << RED << _attack / 2 << BLK << std::endl;
	beRepaired(_armorDamageReduction);
}
