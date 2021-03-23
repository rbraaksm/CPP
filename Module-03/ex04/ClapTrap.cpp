/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 11:15:28 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:59:11 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	std::cout << "---ClapTrap constructor---" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name){
	std::cout << "---ClapTrap constructor---" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& cpy){
	_name = cpy._name;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& nw){
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

ClapTrap::~ClapTrap(void){
	std::cout << "---ClapTrap destructor---" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount){
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

void	ClapTrap::printStatus(int n){
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

void	ClapTrap::printMissed(std::string attacker, std::string target){
	std::string color = YEL;
	if (attacker == "Muk")
		color = CYA;
	else if (attacker == "Blastoise")
		color = BLU;
	else if (attacker == "Charizard")
		color = RED;
	if (target == "Pikachu")
		std::cout << color << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "Blastoise")
		std::cout << color << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

std::string ClapTrap::getName(void) const{
	return (_name);
}
