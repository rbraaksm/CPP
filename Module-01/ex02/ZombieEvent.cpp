/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 11:16:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 16:41:50 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string Type){
	type = Type;
}

Zombie	*ZombieEvent::newZombie(std::string Name){
	return (new Zombie(Name, type));
}

Zombie	*ZombieEvent::randomChump(){
	std::string name[] = {"Andrea", "Lori", "Glenn", "Carl"};
	int index;

	srand(time(NULL));
	index = rand() % 3;
	Zombie *zombie1 = newZombie(name[index]);
	zombie1->announce();
	return (zombie1);
}
