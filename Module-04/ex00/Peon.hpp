/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 11:53:52 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:37:30 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim{
	public:
		Peon();
		Peon(std::string const name);
		Peon(const Peon &cpy);
		Peon &operator=(const Peon &nw);
		~Peon();
};

#endif
