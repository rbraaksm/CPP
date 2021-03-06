/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:53:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:13:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim{
	Peon();
	public:
		Peon(std::string const name);
		Peon(const Peon &cpy);
		Peon &operator=(const Peon &nw);
		~Peon();
};

#endif
