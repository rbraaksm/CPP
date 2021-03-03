/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:24:25 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:32:02 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant"){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return ;
}

SuperMutant::~SuperMutant(void){
    std::cout << "Aaargh..." << std::endl;
    return ;
}

void    SuperMutant::takeDamage(int n){
    Enemy::takeDamage(n - 3);
    return ;
}
