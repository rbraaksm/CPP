/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 22:12:58 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/04 16:57:35 by rbraaksm      ########   odam.nl         */
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
		Zombie(std::string, std::string);
		~Zombie();
		void	setName(std::string);
		void	setType(std::string);
		std::string getName();
		void	announce();
};
#endif