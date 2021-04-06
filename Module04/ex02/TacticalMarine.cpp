/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:47:10 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 10:47:44 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	std::cout << "Copy constructor used." << std::endl;
	*this = src;
	return;
}

TacticalMarine&		TacticalMarine::operator=(TacticalMarine const &obj)
{
	if(this != &obj)
		std::cout << "Nothing to do here." << std::endl;
	return *this;

}

TacticalMarine*		TacticalMarine::clone(void) const
{
	std::cout << "cloning Tactical Marine..." << std::endl;
	return new TacticalMarine;
}

void				TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
	return;
}

void				TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
	return;
}

void				TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
	return;
}
