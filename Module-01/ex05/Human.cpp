/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:38:44 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 17:00:04 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void){
	return ;
}

Human::~Human(void){
	return ;
}

Brain Human::getBrain(void){
    return (this->brain);
}

std::string Human::identify(void){
	return (this->brain.identify());
}