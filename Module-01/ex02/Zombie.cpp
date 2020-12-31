/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 15:56:01 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::Zombie(std::string x, std::string y): name(x), type(y){
	return ;
}

Zombie::~Zombie(){
	std::cout << "Rick Grimes killed the zombie with name : " << name << std::endl;
}
