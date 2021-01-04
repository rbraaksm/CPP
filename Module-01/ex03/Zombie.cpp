/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 16:57:30 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	Zombie::getName(){
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(){
	return ;}

Zombie::Zombie(std::string x, std::string y): name(x), type(y){
	return ;
}

Zombie::~Zombie(){
}


void	Zombie::setName(std::string Name){
	name = Name;}

void	Zombie::setType(std::string Type){
	type = Type;}
