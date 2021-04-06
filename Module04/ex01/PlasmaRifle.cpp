/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 14:32:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 14:54:06 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21){
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpy) : AWeapon(cpy){
	return ;
}

PlasmaRifle::~PlasmaRifle(void){
	return ;
}

void	PlasmaRifle::attack(void) const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
