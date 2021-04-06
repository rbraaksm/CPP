/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/17 12:23:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/19 08:15:52 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void){
	Pony pony;
	pony.heap(&pony);
	pony.printInfo();
	pony.stack(pony);
	pony.printInfo();
}
