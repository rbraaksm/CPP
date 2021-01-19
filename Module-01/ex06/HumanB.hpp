/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 12:46:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 19:03:04 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	std::string	_name;
	Weapon*		_weaponB;
	public:
		HumanB();
		HumanB(std::string);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon&);
};
#endif
