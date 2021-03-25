/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:36:34 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:19:56 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _ap(40), _weapon(NULL){
    return ;
}

Character::Character(const Character &cpy){
    _name = cpy._name;
    _ap = cpy._ap;
    _weapon = cpy._weapon;
    return ;
}

Character& Character::operator=(const Character &nw){
	if (&nw != this){
		_name = nw._name;
    _ap = nw._ap;
    _weapon = nw._weapon;
	}
	return (*this);
}

Character::~Character(void){
    return ;
}

void    Character::recoverAP(void){
    if (_ap + 10 < 40)
        _ap += 10;
    else
        _ap = 40;
    return ;
}

void    Character::equip(AWeapon *wp){
    _weapon = wp;
}

void    Character::attack(Enemy *en){
    if (_weapon && _ap >= _weapon->getAPCost()){
        std::cout << _name << " attacks " << en->getType() << " with a " << _weapon->getName() << std::endl;
        _ap -= _weapon->getAPCost();
        _weapon->attack();
        en->takeDamage(_weapon->getDamage());
        if (en->getHP() == 0)
            delete en;
    }
}

AWeapon*    Character::getWeapon(void) const{
    return (_weapon);
}

std::string const   Character::getName(void) const{
    return (_name);
}

int Character::getAP(void) const{
    return (_ap);
}

std::ostream &operator<<(std::ostream &output, Character const &nw){
    if (nw.getWeapon())
	    output << nw.getName() << " has " << nw.getAP() << " and wields a " << nw.getWeapon()->getName() << std::endl;
    else
        output << nw.getName() << " has " << nw.getAP() << " and is unarmed" << std::endl;
	return (output);
}
