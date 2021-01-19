/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:56:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/14 15:34:31 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap{
	public:
		NinjaTrap();
		NinjaTrap(std::string);
		~NinjaTrap();
		NinjaTrap &operator=(NinjaTrap const&);
		void	ninjaShoeBox(NinjaTrap const&);
		void	ninjaShoeBox(ClapTrap const&);
		void	ninjaShoeBox(FragTrap const&);
};
#endif