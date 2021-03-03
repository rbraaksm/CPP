/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/27 12:58:18 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	return ;
}

FragTrap::FragTrap(std::string const name){
	if (name == "Pikachu")
		std::cout << YEL << name << "!" << RED << "   I choose you!!    " << BLK "<" << YEL << "Pikachu" << BLK << ">" << YEL << " PIKA PIKA" << BLK << std::endl;
	else
		std::cout << BLU << name << "!" << RED << " I choose you!!    " << BLK << "<" << BLU << "Blastoise" << BLK << ">" << BLU << " BLASTOIIISE" << BLK << std::endl;
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
	if (name == "Pikachu")
		_C = YEL;
	else
		_C = BLU;
}

FragTrap::FragTrap(const FragTrap& cpy){
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

FragTrap & FragTrap::operator=(FragTrap const& other){
	_name = other._name;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxEnergyPoints;
	_level = other._level;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangedAttackDamage = other._rangedAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	_tackleAttack = other._tackleAttack;
	_tailWhip = other._tailWhip;
	_rollAttack = other._rollAttack;
	_quickAttack = other._quickAttack;
	_slamAttack = other._slamAttack;
	_C = other._C;
	return (*this);
}

FragTrap::~FragTrap(void){
	std::cout << "<" << _C << _name << BLK << ">";
	if (_hitPoints == 0)
		std::cout << " Let's go to the Pokémon Center!!" << std::endl;
	else
		std::cout << " EASY WIN!!" << std::endl;
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
	if (target == "Pikachu")
		std::cout << BLU << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "Blastoise")
		std::cout << YEL << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

void	FragTrap::meleeAttack(std::string const& target){
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

void	FragTrap::rangedAttack(std::string const& target){
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

