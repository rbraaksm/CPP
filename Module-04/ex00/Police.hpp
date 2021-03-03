/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Police.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/02 12:36:34 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/02 12:38:12 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLICE_HPP
# define POLICE_HPP

#include "Victim.hpp"

class Police : public Victim{
	public:
		Police(void);
		Police(std::string const name);
		Police(const Police &cpy);
		Police &operator=(const Police &nw);
		~Police(void);
};
#endif