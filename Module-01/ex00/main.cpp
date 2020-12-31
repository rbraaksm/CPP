/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 12:23:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 11:35:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void){
	Pony stack;
	std::cout << "\x1b[32;01mPONY ON THE STACK\x1b[0m" << std::endl;
	stack.setName("Nelson");
	stack.setColor("Brown");
	stack.setFood("Oats");
	stack.setOwner("Anky");
	stack.printInfo();
	std::cout << "\x1b[31;01mDestructer\x1b[0m" << std::endl;
}

void	ponyOnTheHeap(void){
	Pony *heap = new Pony;
	std::cout << "\x1b[32;01mPONY ON THE HEAP\x1b[0m" << std::endl;
	heap->setName("Bonfire");
	heap->setColor("Black");
	heap->setFood("Grass");
	heap->setOwner("Anky");
	heap->printInfo();
	std::cout << "\x1b[31;01mDestructer\x1b[0m" << std::endl;
	delete heap;
}
int	main(void){
	ponyOnTheStack();
	std::cout << std::endl << "\x1b[34;01m------------------------------\x1b[0m" << std::endl << std::endl;
	ponyOnTheHeap();
}
