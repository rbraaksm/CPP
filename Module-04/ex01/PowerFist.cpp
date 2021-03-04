/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:55:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 09:22:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power First", 8, 50){
	return ;
}

PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy){
	return ;
}

PowerFist::~PowerFist(void){
	return ;
}

void	PowerFist::attack(void) const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
