/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:23:24 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/24 12:56:00 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human{
	Brain brain;

	public:
	Human(void);
	~Human(void);
	Brain		getBrain();
	std::string identify();
};
#endif
