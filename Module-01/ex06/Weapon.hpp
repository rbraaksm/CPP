/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/30 15:54:27 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/30 16:04:58 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon{
	private:
	std::string			type;

	public:
	Weapon(std::string);
	~Weapon();
	const std::string&	getType();
	void				setType();
};
