/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 21:48:47 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 08:30:12 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void identify_from_reference( Base &p){
	std::cout << "Identift from reference:\t";
	try{
		A a = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
		return ;
	}
	catch (const std::exception& e){}
	try{
		B b = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
		return ;
	}
	catch (const std::exception& e){}
	try{
		C c = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
		return ;
	}
	catch (const std::exception& e){}
}

void	identify_from_pointer(Base *p){
	std::cout << "Identify from pointer:\t\t";
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
	return ;
}

Base* generate(void){
	std::cout << "Generete random class:\t\t";
	int n = rand() % 3;
	if (n == 0){
		std::cout << "Class A" << std::endl;
		return (new A);
	}
	else if (n == 1){
		std::cout << "Class B" << std::endl;
		return (new B);
	}
	std::cout << "Class C" << std::endl;
	return (new C);
}

int	main(void){
	srand(time(NULL));
	Base *p = generate();
	identify_from_pointer(p);
	identify_from_reference(*p);
	return (0);
}
