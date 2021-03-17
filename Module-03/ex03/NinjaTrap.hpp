/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:56:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/17 14:13:43 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(const NinjaTrap& cpy);
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const& target);
		void	ninjaShoeBox(NinjaTrap const& target);
		void	ninjaShoeBox(ClapTrap const& target);
		void	ninjaShoeBox(FragTrap const& target);
		void	ninjaShoeBox(ScavTrap const& target);
};
#endif