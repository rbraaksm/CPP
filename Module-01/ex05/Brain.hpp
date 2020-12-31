/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/24 12:19:59 by rbraaksm      #+#    #+#                 */
/*   Updated: 2020/12/27 23:07:34 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain{
	private:
	std::string address;

	public:
	Brain(void);
	~Brain(void);
	std::string	identify();
};
#endif
