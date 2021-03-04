/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:33:08 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:36:13 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Rad Scorpion"){
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy){
    std::cout << "* click click click *" << std::endl;
    return ;
}

RadScorpion::~RadScorpion(void){
    std::cout << "* SPROTCH *" << std::endl;
    return ;
}

void    RadScorpion::takeDamage(int n){
    Enemy::takeDamage(n);
    return ;
}
