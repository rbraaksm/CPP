/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 08:37:04 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 08:50:03 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
T	min(T const &a, T const &b){
	return ((a < b) ? a : b);
}

template<typename T>
T	max(T const &a, T const &b){
	return ((a > b) ? a : b);
}

template<typename T>
void	swap(T &a, T &b){
	T tmp = a;
	a = b;
	b = tmp;
	return ;
}

#endif
