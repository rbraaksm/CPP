/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/20 12:17:15 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/02/18 13:44:09 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap{
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangedAttackDamage;
	unsigned int	_armorDamageReduction;
	public:
		SuperTrap(void);
		SuperTrap(std::string const name);
		SuperTrap(const SuperTrap& cpy);
		SuperTrap &operator=(SuperTrap const& other);
		~SuperTrap(void);
		using	NinjaTrap::meleeAttack;
		using	FragTrap::rangedAttack;
		using	FragTrap::getHP;
		using	NinjaTrap::getEP;
		using	NinjaTrap::getMAD;
		using	FragTrap::getRAD;
		using	FragTrap::getDR;
		void	meleeAttack(std::string const& target);
		void	rangedAttack(std::string const& target);
};
#endif
