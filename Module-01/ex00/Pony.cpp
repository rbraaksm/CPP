/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 15:04:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/18 15:56:58 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(){
	return ;
}

Pony::~Pony(){
	std::cout << "Pony destroyed" << std::endl;
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

void	Pony::stack(Pony stack){
	std::cout << "\x1b[32;01mPONY ON THE STACK\x1b[0m" << std::endl;
	stack.setName("Nelson");
	stack.setColor("Brown");
	stack.setFood("Oats");
	stack.setOwner("Anky");
	stack.printInfo();
}

void	Pony::heap(Pony *heap){
	std::cout << "\x1b[32;01mPONY ON THE HEAP\x1b[0m" << std::endl;
	heap = new(std::nothrow) Pony;
	if (heap == NULL)
		exit(EXIT_FAILURE) ;
	heap->setName("Nelson");
	heap->setColor("Brown");
	heap->setFood("Oats");
	heap->setOwner("Anky");
	heap->printInfo();
	delete heap;
}
