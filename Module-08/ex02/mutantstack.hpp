/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/13 18:32:44 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/15 13:28:47 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <fstream>

// std::list iterators
// begin = Returns an iterator pointing to the first element in the list container
// end = Returns an iterator pointing to the last element in the list container
// rbegin = Returns a reverse iterator pointing to the last element in the container (i.e., its reverse beginning).
// rend = Returns a reverse iterator pointing to the theoretical element preceding the first element in the list container (which is considered its reverse end).

//std::list const iterators
// cbegin = Returns a const_iterator pointing to the first element in the container.
// cend = Returns a const_iterator pointing to the last element in the container.
// crbegin = Returns a const_reverse_iterator pointing to the last element in the container (i.e., its reverse beginning).
// crend = Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the container (which is considered its reverse end).
// https://www.cplusplus.com/reference/stl/

template<typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack() : std::stack<T>(){};
		MutantStack(MutantStack const &cpy){*this = cpy;};
		MutantStack& operator=(MutantStack const &nw){
			if (this != &nw)
				std::stack<T>::operator=(nw);
			return (*this);}
		~MutantStack(){};

		typedef typename 		std::stack<T>::container_type::iterator 				iterator;
		typedef typename 		std::stack<T>::container_type::reverse_iterator			reverse_iterator;
		typedef typename 		std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename 		std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		iterator				begin(){ return (this->c.begin()); }
		iterator				end(){ return (this->c.end()); }
		reverse_iterator		rbegin() { return (this->c.rbegin()); };
		reverse_iterator		rend() { return (this->c.rend()); };
		const_iterator			begin()const { return (this->c.begin()); };
		const_iterator			end()const { return (this->c.end()); };
		const_reverse_iterator	rbegin() const { return (this->c.rbegin()); };
		const_reverse_iterator	rend() const { return (this->c.rend()); };
};

#endif
