/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:08:54 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	return ;
}

Zombie::Zombie(std::string x, std::string y): name(x), type(y){
	return ;
}

Zombie::~Zombie(){
	std::cout << "Rick Grimes killed the zombie with name : " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}
