/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 12:56:55 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/26 15:29:45 by rbraaksm      ########   odam.nl         */
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
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const& target);
		void	ninjaShoeBox(NinjaTrap const& target);
		void	ninjaShoeBox(const ClapTrap& target);
		void	ninjaShoeBox(FragTrap const& target);
};
#endif