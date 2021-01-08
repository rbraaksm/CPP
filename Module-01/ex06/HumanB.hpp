/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 12:46:21 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/08 10:51:19 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
	public:
		HumanB();
		HumanB(std::string);
		~HumanB();
		void		attack();
		void		setWeapon(Weapon&);
	private:
		std::string	name;
		Weapon*		weaponB;
};
#endif
