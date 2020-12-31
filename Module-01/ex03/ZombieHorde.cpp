/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:16:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 19:02:20 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::~ZombieHorde(void){
	for(int i = 0; i < total; i++){
		std::cout << "Rick Grimes shot : " << _zombie[i].getName() << std::endl;
	}
	delete[] _zombie;}

std::string	ZombieHorde::randomChump(){
	std::string name[] = {"Patrick", "Kyle", "Kate", "James", "logan", "Evelyn"};
	int i = rand() % 6;
	return (name[i]);

}
void	ZombieHorde::announce(){
	for(int i = 0; i < total; i++){
		_zombie[i].announce();
	}
}

ZombieHorde::ZombieHorde(int n): total(n){
	int j = rand() % 2;
	std::string type[] = {"Killer horde", "Sleepy horde"};
	_zombie = new Zombie[total];
	for(int x = 0; x < total; x++){
		_zombie[x].setName(randomChump());
		_zombie[x].setType(type[j]);
	}
}
