/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 11:15:28 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 17:32:36 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Lets battle!!	";
	return ;
}

ClapTrap::ClapTrap(std::string name){
	_name = name;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &nw){
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

ClapTrap::~ClapTrap(void){
	if (_hitPoints == 0 || _name == "Muk")
		std::cout << "Bye loser!!" << std::endl;
	else
		std::cout << "Bye WINNER!!" << std::endl;
	return ;
}
void	ClapTrap::beRepaired(unsigned int amount){
	std::string C = this->_C;
	unsigned int n = this->_hitPoints + amount;
	if (n - amount == 100)
		n = 0;
	else if (n >= this->_maxHitPoints)
		n = amount - (n - this->_maxHitPoints);
	else
		n = amount;
	this->_hitPoints += n;
	std::cout << _C << this->_name << "'s" << BLK;
	printStatus(0);
	if (n == 0)
		std::cout << " hitpoints aren't increased, because his HP is full!" << std::endl;
	else
		std::cout << " hitpoints are increased by " << GRN << n << BLK << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::printStatus(int n){
	std::string COL;
	if ((n == 0 && this->_hitPoints > 55) || (n == 1 && this->_energyPoints > 55))
		COL = GRN;
	else if ((n == 0 && this->_hitPoints > 25) || (n == 1 && this->_energyPoints > 25))
		COL = YEL;
	else
		COL = RED;
	if (n == 0)
		std::cout << " (" << COL << this->_hitPoints << BLK << "/100)";
	else
		std::cout << " (" << COL << this->_energyPoints << BLK << "/100)";
}

void	ClapTrap::printMissed(std::string attacker, std::string target){
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