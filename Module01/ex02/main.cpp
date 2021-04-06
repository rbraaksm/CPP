/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 21:34:54 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 08:21:24 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void){
	ZombieEvent e;
	Zombie *zombie1;

	std::cout << ">>>>>>>>>> EVENT <<<<<<<<<<" << std::endl;
	e.setZombieType("Dead");
	zombie1 = e.newZombie("Shane");
	delete zombie1;

	std::cout <<std::endl << ">>>>>>>>>> RANDOM <<<<<<<<<<" << std::endl;
	e.setZombieType("REALY DEAD");
	zombie1 = e.randomChump();
	delete zombie1;
}
