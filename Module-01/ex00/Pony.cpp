/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:04:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 09:51:43 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){
	return ;
}

Pony::~Pony(){
	return ;
}

void	Pony::setName(std::string Name){
	_name = Name;}

void	Pony::setColor(std::string Color){
	_color = Color;}

void	Pony::setFood(std::string Food){
	_food = Food;}

void	Pony::setOwner(std::string Owner){
	_owner = Owner;}

void	Pony::printInfo()
{
	std::cout << "My name is:          " << _name << std::endl;
	std::cout << "My color is:         " << _color << std::endl;
	std::cout << "My favorite food is: " << _food << std::endl;
	std::cout << "My owner is          " << _owner << std::endl;
	std::cout << std::endl;
}
