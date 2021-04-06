/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:56:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:59:51 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void	printWelcome(){
	std::cout << "**********************************************************************" << std::endl;
	std::cout << "**********************************************************************" << std::endl;
	std::cout << "**                                                                  **" << std::endl;
	std::cout << "**                                                                  **" << std::endl;
	std::cout << "**    " << YEL << "IIIII  IIIIII  II  II  IIIII  III   III  IIIIII  III    II" << BLK << "    **" << std::endl;
	std::cout << "**    " << YEL << "II  I  II  II  II II   II     II I I II  II  II  II I   II    " << BLK << "**" << std::endl;
	std::cout << "**    " << YEL << "IIIII  II  II  III     IIIII  II  I  II  II  II  II  I  II    " << BLK << "**" << std::endl;
	std::cout << "**    " << YEL << "II     II  II  II II   II     II     II  II  II  II   I II    " << BLK << "**" << std::endl;
	std::cout << "**    " << YEL << "II     IIIIII  II  II  IIIII  II     II  IIIIII  II    III    " << BLK << "**" << std::endl;
	std::cout << "**                                                                  **" << std::endl;
	std::cout << "**                                                " << RED << "MEETS FR4GTRAP    " << BLK << "**" << std::endl;
	std::cout << "**                                                                  **" << std::endl;
	std::cout << "**********************************************************************" << std::endl;
	std::cout << "**********************************************************************" << std::endl;
	std::cout << std::endl << std::endl;
}

int		main(void){
	srand(time(NULL));
	printWelcome();
	FragTrap Ash = FragTrap("Pikachu");
	FragTrap	Gary = FragTrap("Blastoise");
	ScavTrap 	Oak = ScavTrap("Muk");
	std::cout << std::endl << "type: START/start" << std::endl;
	std::string str;
	while (1){
		if ((std::getline(std::cin, str))){
			if (str == "START" || str == "start")
				break ;
			else
				std::cout << "Please type: START/start" << std::endl;
		}
	}
	std::cout << std::endl << RED << "3 " << YEL << " 2 " << GRN << " 1 " << YEL << " START!!" << BLK <<  std::endl << std::endl;
	Ash.meleeAttack(Gary.getPokemon());
	Gary.takeDamage(Ash.getDamage());
	Gary.rangedAttack(Ash.getPokemon());
	Ash.takeDamage(Gary.getDamage());
	int Ash_HP = Ash.getHP();
	int Gary_HP = Gary.getHP();
	while (Ash_HP > 0 && Gary_HP > 0){
			Ash.vaulthunter_dot_exe(Gary.getPokemon());
			Gary.takeDamage(Ash.getDamage());
			if ((Ash_HP = Ash.getHP()) == 0 || (Gary_HP = Gary.getHP())== 0)
				break ;
			Gary.vaulthunter_dot_exe(Ash.getPokemon());
			Ash.takeDamage(Gary.getDamage());
			if ((Ash_HP = Ash.getHP()) == 0 || (Gary_HP = Gary.getHP()) == 0)
				break ;
			Ash_HP = Ash.getHP();
			Gary_HP = Gary.getHP();
	}
	std::cout << std::endl;
	if (Ash_HP == 0){
		std::cout << "Mr. Oak challenges the winner Gary" << std::endl << std::endl;
		Oak.meleeAttack(Gary.getPokemon());
		Oak.takeDamage(0);
		Oak.beRepaired(5);
		std::cout << "Muk is trying again" << std::endl << std::endl;
		Oak.rangedAttack(Gary.getPokemon());
		Oak.takeDamage(0);
		Oak.beRepaired(5);
		std::cout << "WHAHAHA, he missed again. One more shot!!" << std::endl << std::endl;
		Oak.challengeNewcomer(Gary.getPokemon());
	}
	else{
		std::cout << "Mr. Oak is challenges the winner Ash" << std::endl << std::endl;
		Oak.meleeAttack(Ash.getPokemon());
		Oak.takeDamage(0);
		Oak.beRepaired(0);
		std::cout << "Muk is trying again" << std::endl << std::endl;
		Oak.rangedAttack(Ash.getPokemon());
		Oak.takeDamage(0);
		Oak.beRepaired(0);
		std::cout << "WHAHAHA, he missed again. One more shot!!" << std::endl << std::endl;
		Oak.challengeNewcomer(Ash.getPokemon());
	}
	std::cout << std::endl << "-----NINJATRAP-----" << std::endl;
	NinjaTrap ninja = NinjaTrap("Hitmonlee");
	ninja.ninjaShoeBox(ninja);
	ninja.ninjaShoeBox(Oak);
	ninja.ninjaShoeBox(Ash);
	ninja.ninjaShoeBox(Gary);
	std::cout << std::endl << "-----SUPERTRAP-----" << std::endl;
	SuperTrap super = SuperTrap("Charizard");
	super.meleeAttack(Ash.getPokemon());
	super.rangedAttack(Gary.getPokemon());
	std::cout << std::endl << RED << "-----DESTRUCTOR-----" << BLK << std::endl;
}
