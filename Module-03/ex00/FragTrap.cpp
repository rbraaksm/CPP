/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/11 13:16:17 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	return ;
}

FragTrap::FragTrap(std::string _name){
	if (_name == "PIKACHU")
		std::cout << YEL << _name << "!" << RED << "   I choose you!!    " << BLK "<" << YEL << "PIKACHU" << BLK << ">" << YEL << " PIKA PIKA" << BLK << std::endl;
	else
		std::cout << BLU << _name << "!" << RED << " I choose you!!    " << BLK << "<" << BLU << "BLASTOISE" << BLK << ">" << BLU << " BLASTOIIISE" << BLK << std::endl;
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
	this->slamAttack = 100;
	this->attack = 0;
	if (_name == "PIKACHU")
		this->C = YEL;
	else
		this->C = BLU;
}

FragTrap & FragTrap::operator=(FragTrap const &nw){
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

FragTrap::~FragTrap(){
	return ;
}

std::string	FragTrap::getPokemon(){
	return (this->name);
}

int		FragTrap::getHP(){
	return (this->hitPoints);
}

int		FragTrap::getReduction(){
	return (this->armorDamageReduction);
}

void	FragTrap::beRepaired(unsigned int amount){
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

unsigned int		FragTrap::getDamage(){
	return (this->attack);
}

unsigned int		FragTrap::setDamage(int i){
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

unsigned int		FragTrap::setDamage1(int i){
	if (i == 0)
		return (this->tackleAttack);
	else if (i == 1)
		return (this->tailWhip);
	else if (i == 2)
		return (this->rollAttack);
	else if (i == 3)
		return (this->quickAttack);
	else
		return (this->slamAttack);
}

void	FragTrap::reduceEnergy(){
	unsigned int n = this->energyPoints + 10;
	if (n + 10 == 100)
		n = 0;
	else if (n >= this->maxHitPoints)
		n = 10 - (n - this->maxHitPoints);
	else
		n = 10;
	this->energyPoints += n;
}

void	FragTrap::printStatus(){
	std::string COL;
	std::string str = (this->name == "PIKACHU" ? "	" : "	");
	if (this->hitPoints > 55)
		COL = GRN;
	else if (this->hitPoints > 25)
		COL = YEL;
	else
		COL = RED;
	std::cout << PUR << "| " << BLK;
	std::cout << YEL << this->name << str << COL << this->hitPoints << BLK << "/100 HP	" \
	 << this->energyPoints << "/100 EP" << PUR << "	|" << std::endl;
}

void	FragTrap::printAttack(std::string attacker, std::string target, int amount){
	if (target == "PIKACHU")
		std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	else if (target == "BLASTOISE")
		std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
		", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	std::cout << C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
}

void	printMissed(std::string attacker, std::string target){
	if (target == "PIKACHU")
		std::cout << BLU << attacker << "'s" << BLK << " attack missed " << YEL << target << BLK << std::endl;
	else if (target == "BLASTOISE")
		std::cout << YEL << attacker << "'s" << BLK << " attack missed " << BLU << target << BLK << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target){
	int i = rand() % 4;
	reduceEnergy();
	this->attack = 0;
	if (i > 0)
		this->attack = setDamage(0);
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::cout << C << attacker << BLK << " used MELEE!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->attack);
	else
		printMissed(attacker, target);
	this->energyPoints -= (this->meleeAttackDamage / 2);
	std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << this->meleeAttackDamage / 2 << BLK << std::endl;
	beRepaired(this->armorDamageReduction);
}

void	FragTrap::rangedAttack(std::string const &target){
	int i = rand() % 4;
	reduceEnergy();
	this->attack = 0;
	if (i > 0)
		this->attack = setDamage(1);
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::cout << C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->attack);
	else
		printMissed(attacker, target);
	this->energyPoints -= (this->rangedAttackDamage / 2);
	std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << this->rangedAttackDamage / 2 << BLK << std::endl;
	beRepaired(this->armorDamageReduction);
}

void	FragTrap::takeDamage(unsigned int amount){
	std::string attacker = (this->name == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::string color = (this->name == "PIKACHU" ? BLU : YEL);
	if (this->hitPoints <= amount)
		this->hitPoints = 0;
	else
		this->hitPoints -= amount;
	if (this->hitPoints == 0){
		std::cout << std::endl << C << this->name << BLK <<  " is " << RED << "K.O" << BLK << ", the winner is " << color << attacker << BLK << std::endl;
		return ;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target){
	int i = rand() % 4;
	int	d = rand() % 5;
	reduceEnergy();
	this->attack = 0;
	if (i > 0)
		this->attack = setDamage(d + 2);
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::string attackType[] = {"TACKLE", "tailWhip", "ROLL", "quickAttack", "SLAM"};
	if ((this->energyPoints - (this->energyPoints / 2)) < 0){
		std::cout << C << attacker << BLK << " cannot use " << attackType[d] << " because EnergyPoint are too low!" << std::endl;
		return ;
	}
	std::cout << C << attacker << BLK << " used " << attackType[d] << "!" << std::endl;
	if (i > 0)
		printAttack(attacker, target, this->attack);
	else
		printMissed(attacker, target);
	this->energyPoints -= (this->attack / 2);
	std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << this->attack / 2 << BLK << std::endl;
	beRepaired(this->armorDamageReduction);
}
