/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 10:31:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 12:44:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Police.hpp"

int main(void)
{
	std::cout << "---- Constructors ----" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Police mark("Mark");
	std::cout << std::endl;
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(mark);
	std::cout << std::endl << "---- Destructors ----" << std::endl;
}