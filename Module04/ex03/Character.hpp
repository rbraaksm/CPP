/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 12:09:38 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/25 14:24:16 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter{
	std::string		_name;
	AMateria*		_inventory[4];
	int				_count;
	Character();
	public:
		Character(std::string const &name);
		Character(Character const &cpy);
		Character& operator=(const Character &nw);
		virtual ~Character();
		std::string const&	getName() const;
		virtual void		equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		void				printInventory() const;
		AMateria*			getMateria(int index);
};

#endif
