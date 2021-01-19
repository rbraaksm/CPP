/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 09:00:10 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	return ;}

Zombie::Zombie(std::string x, std::string y): _name(x), _type(y){
	return ;
}

Zombie::~Zombie(){
}

std::string	Zombie::getName(){
	return (_name);
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName(std::string Name){
	_name = Name;}

void	Zombie::setType(std::string Type){
	_type = Type;}
