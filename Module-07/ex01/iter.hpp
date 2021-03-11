/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 09:25:54 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 09:47:21 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	print(T const x){
	std::cout << x << " ";
	return ;
}

template<typename T>
void	iter(T const *addr, size_t const length, void function(T const &x)){
	for (size_t i = 0; i < length; i++)
		function(addr[i]);
	std::cout << std::endl;
	return ;
}
#endif
