/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:56:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/27 12:21:09 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(const NinjaTrap& cpy);
		NinjaTrap &operator=(NinjaTrap const& target);
		~NinjaTrap(void);
		void	ninjaShoeBox(NinjaTrap const& target);
		void	ninjaShoeBox(ClapTrap const& target);
		void	ninjaShoeBox(FragTrap const& target);
		void	meleeAttack(std::string const& target);
		unsigned int	getEP(void) const;
		unsigned int	getMAD(void) const;
};
#endif