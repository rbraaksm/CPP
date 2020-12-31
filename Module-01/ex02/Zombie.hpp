/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:12:58 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/18 15:55:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string	name;
		std::string	type;
	public:
		Zombie();
		~Zombie();
		Zombie(std::string, std::string);
		void	announce();
};
#endif
