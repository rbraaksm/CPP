/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 10:31:54 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 11:45:33 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <iostream>

class Sorcerer{
	std::string	_name;
	std::string _title;
	public:
		Sorcerer(void);
		Sorcerer(std::string const name, std::string const title);
		Sorcerer(const Sorcerer &cpy);
		Sorcerer &operator=(const Sorcerer &nw);
		~Sorcerer(void);
		std::string	getName(void) const;
		std::string getTitle(void) const;
		void polymorph(Victim const &vic) const;
};

std::ostream &operator<<(std::ostream &output, Sorcerer const &nw);

#endif
