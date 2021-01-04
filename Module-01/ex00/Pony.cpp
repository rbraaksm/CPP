/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:04:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 16:52:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::~Pony(){
	std::cout << "BOOOOM!!! *HIHIHIHIHIHI*" << std::endl << "The pony is shocked and fled" << std::endl;
}
void	Pony::setName(std::string Name){
	name = Name;}

void	Pony::setColor(std::string Color){
	color = Color;}

void	Pony::setFood(std::string Food){
	food = Food;}

void	Pony::setOwner(std::string Owner){
	owner = Owner;}

void	Pony::printInfo()
{
	std::cout << "My name is:          " << name << std::endl;
	std::cout << "My color is:         " << color << std::endl;
	std::cout << "My favorite food is: " << food << std::endl;
	std::cout << "My owner is          " << owner << std::endl;
	std::cout << std::endl;
}
