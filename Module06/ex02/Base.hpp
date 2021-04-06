/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 21:44:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 08:30:27 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base{
	public:
		virtual ~Base(){}
};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

#endif
