/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:13:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 13:57:45 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim{
	std::string _name;
	public:
		Victim();
		Victim(std::string const name);
		Victim(const Victim &cpy);
		Victim &operator=(const Victim &nw);
		~Victim();
		std::string	getName() const;
		void		getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &output, Victim const &nw);

#endif
