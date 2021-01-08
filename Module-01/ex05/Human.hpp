/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:23:24 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/08 10:51:03 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human{
	public:
	Human();
	~Human();
	Brain		getBrain();
	std::string identify();
	private:
		Brain 	brain;
};
#endif
