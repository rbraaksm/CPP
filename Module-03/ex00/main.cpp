/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:56:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/07 09:25:40 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	printStatus(FragTrap Ash, FragTrap Gary){
	std::cout << std::endl << PUR << "-------------------------------------------------" << BLK << std::endl;
	Ash.printStatus();
	Gary.printStatus();
	std::cout << PUR << "-------------------------------------------------" << BLK << std::endl << std::endl;
}
 void	last_rounds(FragTrap Ash, FragTrap Gary, int i){
	int Ash_HP = Ash.getHP();
	int Gary_HP = Gary.getHP();
	while (Ash_HP > 0 && Gary_HP > 0){
		if (i == 0){
			Ash.vaulthunter_dot_exe(Gary.getPokemon());
			Gary.takeDamage(Ash.getDamage(-1));
			printStatus(Ash, Gary);
			Gary.vaulthunter_dot_exe(Ash.getPokemon());
			Ash.takeDamage(Gary.getDamage(-1));
			printStatus(Ash, Gary);
		}
		else{
			Gary.vaulthunter_dot_exe(Ash.getPokemon());
			Ash.takeDamage(Gary.getDamage(-1));
			printStatus(Ash, Gary);
			Ash.vaulthunter_dot_exe(Gary.getPokemon());
			Gary.takeDamage(Ash.getDamage(1));
			printStatus(Ash, Gary);
		}
		Ash_HP = Ash.getHP();
		Gary_HP = Gary.getHP();
		break;
	}
}

void	round_1(FragTrap Ash, FragTrap Gary){
	int i;
	i = rand() % 2;
	if (i == 0){
		Ash.meleeAttack(Gary.getPokemon());
		Gary.takeDamage(Ash.getDamage(-1));
		printStatus(Ash, Gary);
		Gary.rangedAttack(Ash.getPokemon());
		Ash.takeDamage(Gary.getDamage(-1));
		printStatus(Ash, Gary);
	}
	else{
		Gary.meleeAttack(Ash.getPokemon());
		Ash.takeDamage(Gary.getDamage(-1));
		printStatus(Ash, Gary);
		Ash.rangedAttack(Gary.getPokemon());
		Gary.takeDamage(Ash.getDamage(-1));
		printStatus(Ash, Gary);
	}
	last_rounds(Ash, Gary, i);
}

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
	// printWelcome();
	std::cout << "<Ash>  ";
	FragTrap	Ash("PIKACHU");
	std::cout << "<Gary> ";
	FragTrap	Gary("BLASTOISE");

	std::cout << std::endl << RED << "3 " << YEL << " 2 " << GRN << " 1 " << YEL << " START!!" << BLK <<  std::endl << std::endl;
	round_1(Ash, Gary);
}