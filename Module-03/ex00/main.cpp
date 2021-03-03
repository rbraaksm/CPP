/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:56:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/27 12:52:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	std::cout << "--------CONSTRUCTOR--------" << std::endl;
	std::cout << "<Ash>  ";
	FragTrap	Ash("Pikachu");
	std::cout << "<Gary> ";
	FragTrap	Gary("Blastoise");

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
	std::cout << "--------DESTRUCTOR--------" << std::endl;
}