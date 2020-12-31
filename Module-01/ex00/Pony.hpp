/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 13:00:57 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/17 21:11:16 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{
	public:
		void	setName(std::string Name);
		void	setColor(std::string Color);
		void	setFood(std::string Food);
		void	setOwner(std::string Owner);
		void	printInfo();
		~Pony(){
			std::cout << "BOOOOM!!! *HIHIHIHIHIHI*" << std::endl << "The pony is shocked and fled" << std::endl;}

	private:
		std::string	name;
		std::string	color;
		std::string	food;
		std::string	owner;
};
#endif
