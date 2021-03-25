/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Police.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 12:38:19 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:17:40 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Police.hpp"

Police::Police(std::string const name) : Victim(name){
	std::cout << "I'm a policeman." << std::endl;
	return ;
}

Police::Police(const Police &cpy) : Victim(cpy){
	return ;
}

Police& Police::operator=(const Police &nw){
	if (&nw != this)
		Victim::operator=(nw);
	return (*this);
}

Police::~Police(void){
	std::cout << "The policeman died in line of duty!" << std::endl;
	return ;
}

