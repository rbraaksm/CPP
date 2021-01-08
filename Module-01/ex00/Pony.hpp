/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 13:00:57 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/08 10:46:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony{
	public:
		Pony();
		~Pony();
		void	setName(std::string Name);
		void	setColor(std::string Color);
		void	setFood(std::string Food);
		void	setOwner(std::string Owner);
		void	printInfo();
	private:
		std::string	name;
		std::string	color;
		std::string	food;
		std::string	owner;
};
#endif
