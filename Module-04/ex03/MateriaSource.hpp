/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 13:15:03 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:40:56 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
	AMateria	*_inventorySource[4];
	int			_sourceCount;
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource& operator=(const MateriaSource &nw);
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const &type);
};

#endif
