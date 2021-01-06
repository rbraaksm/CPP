/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 14:46:42 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:09:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent{
	public:
		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string Type);
		Zombie	*newZombie(std::string Name);
		Zombie	*randomChump();

	private:
		std::string type;
};
#endif
