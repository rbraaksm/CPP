/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 12:05:42 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 12:36:50 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>

template<typename T>
void	print(T &x){
	std::cout << "Vec/list: ";
	typename T::iterator begin = x.begin();
	typename T::iterator end = x.end();
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl;
}

template<typename T>
int		easyfind(T &x, int nb){
	typename T::iterator it = find(x.begin(), x.end(), nb);
	if (it == x.end())
		throw std::out_of_range("Number not found!");
	std::cout << "Found number!" << std::endl;
	return (*it);
}
#endif
