/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/30 15:54:27 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 19:03:16 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon{
	std::string			_type;
	public:
		Weapon();
		Weapon(std::string);
		~Weapon(void);
		const std::string&	getType();
		void				setType(std::string);
};
#endif
