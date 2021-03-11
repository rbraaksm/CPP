/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 09:25:35 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 09:45:20 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void){
	std::string arrayOfStr[] = {"Codam", "is", "really", "fun", "!"};
	char		arrayOfChar[] = {"CODAM"};
	int			arrayOfInt[] = {1, 3, 5, 7, 9};

	std::cout << "----> PRINT FUNCTION <----" << std::endl;
	std::cout << "String array:\t";
	::iter(arrayOfStr, 5, print);
	std::cout << "Char array:\t";
	::iter(arrayOfChar, 5, print);
	std::cout << "Int array:\t";
	::iter(arrayOfInt, 5, print);
	return (0);
}
