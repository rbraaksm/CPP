/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 16:16:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 09:00:04 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(){
	return ;
}

ZombieHorde::ZombieHorde(int n): _total(n){
	int j = rand() % 2;
	std::string type[] = {"Killer horde", "Sleepy horde"};
	if (_total < 0){
		std::cout << "Please use a positive index!" << std::endl;
		exit(EXIT_FAILURE) ;
	}
	_zombie = new(std::nothrow) Zombie[_total];
	if (_zombie == NULL){
		std::cout << "Allocation failed!" << std::endl;
		return ;}
	for(int x = 0; x < _total; x++){
		_zombie[x].setName(randomChump());
		_zombie[x].setType(type[j]);
	}
}

ZombieHorde::~ZombieHorde(){
	for(int i = 0; i < _total; i++){
		std::cout << "Rick Grimes shot : " << _zombie[i].getName() << std::endl;
	}
	delete[] _zombie;}

std::string	ZombieHorde::randomChump(){
	std::string name[] = {"Patrick", "Kyle", "Kate", "James", "logan", "Evelyn"};
	int i = rand() % 6;
	return (name[i]);

}
void	ZombieHorde::announce(){
	for(int i = 0; i < _total; i++){
		_zombie[i].announce();
	}
}
