/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 10:58:46 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 09:57:23 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA{
	public:
		HumanA(std::string, Weapon&);
		~HumanA();
		void		attack();
	private:
		std::string	_name;
		Weapon&		_weaponA;
};
#endif
