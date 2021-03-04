/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFirst.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:55:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 09:22:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFirst.hpp"

PowerFirst::PowerFirst(void) : AWeapon("Power First", 8, 50){
	return ;
}

PowerFirst::PowerFirst(const PowerFirst &cpy) : AWeapon(cpy){
	return ;
}

PowerFirst::~PowerFirst(void){
	return ;
}

void	PowerFirst::attack(void) const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
