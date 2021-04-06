/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/13 18:33:19 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/15 13:38:48 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void	own_test(void){
	std::cout << std::endl << "----> Own test <----" << std::endl;
	srand(time(NULL));
	MutantStack<int> mstack;
	MutantStack<int> mstack_reverse;

	if (mstack.empty())
		std::cout << "--> Stack is empty" << std::endl;
	std::cout << "--> Creating stack" << std::endl;
	for (int i = 0; i < 7; i++)
		mstack.push((rand() % 7) * (rand() % 7));
	std::cout << "--> Print stack: ";
	MutantStack<int>::iterator begin = mstack.begin();
	MutantStack<int>::iterator end = mstack.end();
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl << "--> Stack size: " << mstack.size() << std::endl;
	std::cout << "--> Top function: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "--> Top function after pop() " << mstack.top() << std::endl;
	std::cout << "--> Stack size: " << mstack.size() << std::endl;
	std::cout << "--> Push function: 42" << std::endl;
	mstack.push(42);
	begin = mstack.begin();
	std::cout << "--> Print stack: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl << "--> Top function: " << mstack.top() << std::endl;

	std::cout << std::endl << "----> Iterator <----" << std::endl;
	begin = mstack.begin();
	for (; begin != end; begin++)
		std::cout << *begin << " ";

	std::cout << std::endl << std::endl << "----> Const iterator <---" << std::endl;
	MutantStack<int>::const_iterator cbegin = mstack.begin();
	MutantStack<int>::const_iterator cend = mstack.end();
	for (; cbegin != cend; cbegin++)
		std::cout << *cbegin << " ";

	std::cout << std::endl << std::endl << "----> Reverse iterator <---" << std::endl;
	std::cout << "Reverse stack: ";
	for (int i = 0; i < 7; i++)
		mstack_reverse.push(i);
	begin = mstack_reverse.begin();
	end = mstack_reverse.end();
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl;
	MutantStack<int>::reverse_iterator rbegin = mstack_reverse.rbegin();
	MutantStack<int>::reverse_iterator rend = mstack_reverse.rend();
	std::cout << "Reverse stack: ";
	for (; rbegin != rend; rbegin++)
		std::cout << *rbegin << " ";

	std::cout << std::endl << std::endl << "----> Const reverse iterator <---" << std::endl;
	MutantStack<int>::const_reverse_iterator crbegin = mstack_reverse.rbegin();
	MutantStack<int>::const_reverse_iterator crend = mstack_reverse.rend();
	for (; crbegin != crend; crbegin++)
		std::cout << *crbegin << " ";
	std::cout << std::endl;

	std::cout << std::endl << "----> Copy constructor <----" << std::endl;
	MutantStack<int> test(mstack);
	begin = mstack.begin();
	end = mstack.end();
	std::cout << "--> Print MSTACK: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	begin = test.begin();
	end = test.end();
	std::cout << std::endl << "--> Print COPY:\t  ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";

	std::cout << std::endl << std::endl << "----> Assignation <----" << std::endl;
	MutantStack<int> test2 = mstack;
	begin = mstack.begin();
	end = mstack.end();
	std::cout << "--> Print old stack: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	begin = test2.begin();
	end = test2.end();
	std::cout << std::endl << "--> Print new stack: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	test2.push(422);
	begin = mstack.begin();
	end = mstack.end();
	std::cout << std::endl << "--> Push '42' to new" << std::endl;
	std::cout << "--> Print old stack: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	begin = test2.begin();
	end = test2.end();
	std::cout << std::endl << "--> Print new stack: ";
	for (; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl;
}

void	basic_main(void){
	std::ofstream main_stack("basic_main_stack.txt");
	std::ofstream main_list("basic_main_list.txt");
	MutantStack<int> mstack;
	std::list<int> mstack2;
	mstack.push(5);
	mstack2.push_back(5);
	mstack.push(17);
	mstack2.push_back(17);
	main_stack << mstack.top() << std::endl;
	main_list << *mstack2.rbegin() << std::endl;
	mstack.pop();
	mstack2.pop_back();
	main_stack << mstack.size() << std::endl;
	main_list << mstack2.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737); //[...] mstack.push(0);
	mstack2.push_back(3); mstack2.push_back(5); mstack2.push_back(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin(); MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator it2 = mstack2.begin();
	++it;
	++it2;
	--it;
	--it2;
	while (it != ite){
	    main_stack << *it << std::endl;
	    main_list << *it2 << std::endl;
		++it;
		++it2;
	}
	std::stack<int> s(mstack);
	std::list<int> s2(mstack2);
}

int	main(void){
	basic_main();
	std::cout << "----> Difference between basic_main_stack and basic_main_list <----" << std::endl;
	std::cout << "--> system call \"diff basic_main_list.txt basic_main_stack.txt\"" << std::endl;
	system("diff basic_main_list.txt basic_main_stack.txt");
	own_test();
	return (0);
}
