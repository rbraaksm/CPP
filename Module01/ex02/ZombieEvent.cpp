/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 11:16:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 08:20:11 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <cstdlib>

ZombieEvent::ZombieEvent(){
	return ;
}

ZombieEvent::~ZombieEvent(){
	return ;
}

void	ZombieEvent::setZombieType(std::string Type){
	_type = Type;
}

Zombie	*ZombieEvent::newZombie(std::string Name){
	Zombie *zombie1 = new(std::nothrow) Zombie(Name, _type);
	if (zombie1 == NULL)
		exit(EXIT_FAILURE);
	zombie1->announce();
	return (zombie1);
}

Zombie	*ZombieEvent::randomChump(){
	std::string name[] = {"Andrea", "Lori", "Glenn", "Carl"};
	int index;

	srand(time(NULL));
	index = rand() % 3;
	Zombie *zombie1 = newZombie(name[index]);
	return (zombie1);
}
