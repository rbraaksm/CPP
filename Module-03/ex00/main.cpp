/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:56:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/11 13:27:09 by rbraaksm      ########   odam.nl         */
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
	FragTrap	first;
	FragTrap	second;

	if (i == 0){
		first = Ash;
		second = Gary;
	}
	else{
		first = Gary;
		second = Ash;
	}
	int Ash_HP = Ash.getHP();
	int Gary_HP = Gary.getHP();
	while (Ash_HP > 0 && Gary_HP > 0){
			first.vaulthunter_dot_exe(second.getPokemon());
			second.takeDamage(first.getDamage());
			printStatus(first, second);
			if ((Ash_HP = first.getHP()) == 0 || (Gary_HP = second.getHP())== 0)
				break ;
			second.vaulthunter_dot_exe(first.getPokemon());
			first.takeDamage(second.getDamage());
			if ((Ash_HP = first.getHP()) == 0 || (Gary_HP = second.getHP()) == 0)
				break ;
			printStatus(first, second);
			Ash_HP = first.getHP();
			Gary_HP = second.getHP();
	}
}

void	round_1(FragTrap Ash, FragTrap Gary, int i){
	if (i == 0){
		Ash.meleeAttack(Gary.getPokemon());
		Gary.takeDamage(Ash.getDamage());
		printStatus(Ash, Gary);
		Gary.rangedAttack(Ash.getPokemon());
		Ash.takeDamage(Gary.getDamage());
		printStatus(Ash, Gary);
	}
	else{
		Gary.meleeAttack(Ash.getPokemon());
		Ash.takeDamage(Gary.getDamage());
		printStatus(Ash, Gary);
		Ash.rangedAttack(Gary.getPokemon());
		Gary.takeDamage(Ash.getDamage());
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
	int i;
	i = rand() % 2;
	printWelcome();
	std::cout << "<Ash>  ";
	FragTrap	Ash("PIKACHU");
	std::cout << "<Gary> ";
	FragTrap	Gary("BLASTOISE");

	std::cout << std::endl << RED << "3 " << YEL << " 2 " << GRN << " 1 " << YEL << " START!!" << BLK <<  std::endl << std::endl;
	std::cout << "type: START" << std::endl;
	std::string str;
	while (1){
		if ((std::getline(std::cin, str)))
			if (str == "START"){
				round_1(Ash, Gary, i);}
				return (0);
			}
			std::cout << "Please type: START" << std::endl;
}