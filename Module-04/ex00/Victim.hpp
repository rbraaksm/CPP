/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:13:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 11:43:42 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim{
	std::string _name;
	public:
		Victim(void);
		Victim(std::string const name);
		Victim(const Victim &cpy);
		Victim &operator=(const Victim &nw);
		~Victim(void);
		std::string	getName(void) const;
		void		getPolymorphed(void) const;
};

std::ostream &operator<<(std::ostream &output, Victim const &nw);

#endif
