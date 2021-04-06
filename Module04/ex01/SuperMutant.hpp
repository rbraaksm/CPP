/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:20:28 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/05 12:39:08 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy{
    public:
        SuperMutant();
        SuperMutant(const SuperMutant &cpy);
        SuperMutant &operator=(const SuperMutant &nw);
        virtual ~SuperMutant();
        void    takeDamage(int n);
};
#endif
