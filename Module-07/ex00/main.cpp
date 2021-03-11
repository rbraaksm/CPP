/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 08:36:16 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 11:40:56 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void){
	std::cout << "-----> BASIC TESTS <-----" << std::endl;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl << "-----> OWN TESTS <-----" << std::endl;
	std::cout << "---> Swap tests" << std::endl;
	double e = 35356.34534;
	double f = 23423.768768;
	std::cout << "e: " << e << "\tf: " << f << std::endl;
	::swap(e,f);
	std::cout << "e: " << e << "\tf: " << f << std::endl << std::endl;
	float g = 365.344f;
	float h = 243.7768f;
	std::cout << "g: " << g << "\th: " << h << std::endl;
	::swap(g,h);
	std::cout << "g: " << g << "\th: " << h << std::endl << std::endl;
	char i = 'h';
	char j = '-';
	std::cout << "i: " << i << "\tj: " << j << std::endl;
	::swap(i,j);
	std::cout << "i: " << i << "\tj: " << j << std::endl << std::endl;
	std::cout << "---> Min tests" << std::endl;
	std::cout << "e: " << e << "\tf: " << f << std::endl;
	std::cout << ::min( e, f ) << std::endl << std::endl;
	std::cout << "g: " << g << "\th: " << h << std::endl;
	std::cout << ::min( g, h ) << std::endl << std::endl;
	std::cout << "i: " << i << "\tj: " << j << std::endl;
	std::cout << ::min( i, j ) << std::endl << std::endl;
	std::cout << "---> Max tests" << std::endl;
	std::cout << "e: " << e << "\tf: " << f << std::endl;
	std::cout << ::max( e, f ) << std::endl << std::endl;
	std::cout << "g: " << g << "\th: " << h << std::endl;
	std::cout << ::max( g, h ) << std::endl << std::endl;
	std::cout << "i: " << i << "\tj: " << j << std::endl;
	std::cout << ::max( i, j ) << std::endl << std::endl;
	return (0);
}
