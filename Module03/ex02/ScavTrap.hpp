/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:12:43 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/23 10:56:18 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap(void);
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap& cpy);
		ScavTrap  &operator=(ScavTrap const& nw);
		~ScavTrap(void);
		void	rangedAttack(std::string const& target);
		void	meleeAttack(std::string const& target);
		void	takeDamage(unsigned int amount);
		void	challengeNewcomer(std::string const& target);
};
#endif
