/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 14:19:17 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/07 10:42:23 by rbraaksm      ########   odam.nl         */
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
	if (_name == "PIKACHU")
		this->C = YEL;
	else
		this->C = BLU;
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

unsigned int		FragTrap::getDamage(int i){
	std::cout << "GET DAMAGE: " << i << std::endl;
	if (this->level == 0)
		this->attack = 0;
	else if (i == 0)
		this->attack = this->meleeAttackDamage;
	else if (i == 1)
		this->attack = this->rangedAttackDamage;
	else if (i == 2)
		this->attack = 5;
	else if (i == 3)
		this->attack = 0;
	else if (i == 4)
		this->attack = 15;
	else if (i == 5)
		this->attack = 10;
	else if (i == 6)
		this->attack = 100;
	else if (i == -1)
		return (this->attack);
	return (this->attack);
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

void	FragTrap::printAttack(std::string attacker, std::string target, int i, int amount){
	// if (target == "PIKACHU" && i == 0)
	// 	std::cout << BLU << attacker << "'s" << BLK << " attack hit " << YEL << target << BLK \
	// 	", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	// else if (target == "BLASTOISE" && i == 0)
	// 	std::cout << YEL << attacker << "'s" << BLK << " attack hit " << BLU << target << BLK \
	// 	", it caused " << RED << amount << BLK << " points of damage!" << std::endl;
	// else if (target == "PIKACHU" && i == 1)
	// 	std::cout << BLU << attacker << "'s" << BLK << " attack missed!" << std::endl;
	// else
	// 	std::cout << YEL << attacker << "'s" << BLK << " attack missed!" << std::endl;
	this->level = 1;
	if (i == 1)
		this->level = 0;
	// std::cout << C << attacker << "'s" << BLK << " TURN IS OVER." << std::endl;
	(void)attacker;
	(void)target;
	(void)amount;
}

void	FragTrap::meleeAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	getDamage(0);
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::cout << C << attacker << BLK << " used MELEE!" << std::endl;
	if (this->energyPoints < this->meleeAttackDamage){
		std::cout << "I CAN'T USE A MELEE ATTACK, I'M OUT OF ENERGY" << std::endl;
		return ;}
	printAttack(attacker, target, i, this->meleeAttackDamage);
	this->energyPoints -= (this->meleeAttackDamage / 2);
	std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << this->meleeAttackDamage / 2 << BLK << std::endl;
	if (i == 0)
		beRepaired(this->armorDamageReduction);
}

void	FragTrap::rangedAttack(std::string const &target){
	int i = rand() % 2;
	reduceEnergy();
	getDamage(1);
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::cout << C << attacker << BLK << " used a RANGED ATTACK!" << std::endl;
	if (this->energyPoints < this->rangedAttackDamage){
		std::cout << "I CAN'T USE A RANGED ATTACK, I'M OUT OF ENERGY" << std::endl;}
	else{
		printAttack(attacker, target, i, this->rangedAttackDamage);
		this->energyPoints -= (this->rangedAttackDamage / 2);
		std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << this->rangedAttackDamage / 2 << BLK << std::endl;}
	if (i == 0)
		beRepaired(this->armorDamageReduction);
}

void	FragTrap::takeDamage(unsigned int amount){
	this->hitPoints -= amount;
	if (this->hitPoints <= 0){
		std::cout << "I'M DEAD!" << std::endl;
		return ;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target){
	int i = rand() % 2;
	int	attack = rand() % 5;
	std::cout <<  "ATTACK: " << attack  << std::endl;
	attack += 2;
	std::cout <<  "ATTACK: " << attack << std::endl;
	unsigned int damage = getDamage(attack);
	std::cout <<  "DAMAGE: " << damage << std::endl;
	attack -= 2;
	reduceEnergy();
	std::string attackType[] = {"TACKLE", "tailWhip", "ROLL", "quickAttack", "SLAM"};
	std::string attacker = (target == "PIKACHU" ? "BLASTOISE" : "PIKACHU");
	std::cout << C << attacker << BLK << " used " << attackType[attack] << "!" << std::endl;
	if (damage != 100 && this->energyPoints < damage){
		std::cout << "I CAN'T USE " << attackType[attack] << "I'M OUT OF ENERGY" << std::endl;}
	else{
		printAttack(attacker, target, i, damage);
		this->energyPoints -= (damage / 2);
		std::cout << C << attacker << "'s" << BLK << " energyPoints are reduced by " << RED << damage / 2 << BLK << std::endl;}
	if (i == 0)
		beRepaired(this->armorDamageReduction);
}
