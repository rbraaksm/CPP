/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 10:20:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:39:48 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

typedef struct			s_list{
		ISpaceMarine	*_marine;
		struct s_list	*_next;
}						t_list;

class Squad : public ISquad{
	t_list			*_head;
	int				_index;

	public:
		Squad();
		Squad(const Squad &cpy);
		Squad(const ISquad &cpy);
		virtual ~Squad();
		void			deleteListFunction();
		Squad&			operator=(ISquad const &obj);
		Squad&			operator=(Squad const &obj);
		int 			getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		int				push(ISpaceMarine* marinePtr);
};

#endif
