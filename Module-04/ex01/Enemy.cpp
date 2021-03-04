/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:08:50 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 11:12:53 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void){
    return ;
}

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type){
    return ;
}

Enemy::Enemy(const Enemy &cpy){
    _hp = cpy._hp;
    _type = cpy._type;
    return ;
}

Enemy& Enemy::operator=(const Enemy &nw){
	if (&nw != this){
		_hp = nw._hp;
		_type = nw._type;
	}
	return (*this);
}

Enemy::~Enemy(void){
    return ;
}

int Enemy::getHP(void) const{
    return (_hp);
}

void    Enemy::takeDamage(int n){
    if (_hp - n > 0)
        _hp -= n;
    else
        _hp = 0;
    return ;
}

std::string    Enemy::getType(void) const{
    return (_type);
}