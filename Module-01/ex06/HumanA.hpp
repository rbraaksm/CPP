/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 10:58:46 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 12:39:47 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA{
	private:
	std::string		name;
	Weapon&			weaponA;

	public:
	HumanA(std::string, Weapon&);
	~HumanA(void);
	void			attack();
};
#endif
