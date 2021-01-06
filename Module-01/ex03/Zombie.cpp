/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:11:30 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	return ;}

Zombie::Zombie(std::string x, std::string y): name(x), type(y){
	return ;
}

Zombie::~Zombie(){
}

std::string	Zombie::getName(){
	return (name);
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string Name){
	name = Name;}

void	Zombie::setType(std::string Type){
	type = Type;}
