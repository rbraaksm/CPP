/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/03 10:20:28 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/03 10:32:46 by rbraaksm      ########   odam.nl         */
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