/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 13:36:09 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/13 17:20:13 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main(void){
	srand(time(NULL));
	std::cout << "----> Basic main <----" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl << "----> Own test <----" << std::endl;
	Span test = Span(3);
	try{
		test.addNumber(-1);
		test.addNumber(-22);
		test.addNumber(2);
		test.print();
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
	}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << std::endl << "----> add number, but there is no place" << std::endl;
	try{test.addNumber(-1);}
	catch(std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << std::endl << "----> Copy constructor <----" << std::endl;
	std::cout << "First: ";
	test.print();
	Span test2 = test;
	std::cout << "Second: ";
	test2.print();
	std::cout << std::endl << "----> Assignation <----" << std::endl;
	Span test3 = Span(test);
	std::cout << "First: ";
	test.print();
	std::cout << "Second: ";
	test3.print();
	std::cout << std::endl << "----> Add range <----" << std::endl;
	Span test4(10);
	test4.addRange(1, 100);
	test4.print();
	std::cout << "Shortest span: " << test4.shortestSpan() << std::endl;
	std::cout << "Longest span: " << test4.longestSpan() << std::endl;
	return (0);
}
