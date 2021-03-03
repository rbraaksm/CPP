/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 13:12:47 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:16:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void){
	return ;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _ap(apcost), _damagePoints(damage){
	return ;
}

AWeapon::AWeapon(const AWeapon &cpy){
	_name = cpy._name;
	_ap = cpy._ap;
	_damagePoints = cpy._damagePoints;
	return ;
}

AWeapon& AWeapon::operator=(const AWeapon &nw){
	if (&nw != this){
		_name = nw._name;
		_ap = nw._ap;
		_damagePoints = nw._damagePoints;
	}
	return (*this);
}

AWeapon::~AWeapon(void){
	return ;
}

std::string const	AWeapon::getName(void) const{
	return (_name);
}

int	AWeapon::getAPCost(void) const{
	return (_ap);
}

int	AWeapon::getDamage(void) const{
	return (_damagePoints);
}
