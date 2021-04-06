/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 13:19:53 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/04/02 13:52:03 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) : _n(n), _count(0){
	return ;
}

Span::Span(Span const &cpy){
	*this = cpy;
	return ;
}

Span&	Span::operator=(Span const &nw){
	if (this != &nw){
		_array = nw._array;
		_n = nw._n;
		_count = nw._count;
	}
	return (*this);
}

Span::~Span(void){
	return ;
}

void	Span::addNumber(int nb){
	if (_count == _n)
		throw std::length_error("Cannot add number, because you reached the limit of numbers!");
	else{
		_array.push_back(nb);
		_count++;
	}
	return ;
}

int	Span::shortestSpan(void){
	if (_count <= 1)
		throw std::logic_error("There is no shortest span, because there are too few numbers!");
	std::vector<int>::const_iterator begin = _array.begin();
	std::vector<int>::const_iterator end = _array.end();
	std::sort(_array.begin(), _array.end());
	int ret = *(begin + 1) - *begin;
	for (; begin != end; begin++)
		if (*(begin + 1) && *(begin + 1) - *begin < ret)
			ret = *(begin + 1) - *begin;
	return (ret);
}

int	Span::longestSpan(void){
	if (_count <= 1)
		throw std::logic_error("There is no longest span, because there are too few numbers!");
	return (*(_array.end() - 1) - *_array.begin());
}

void	Span::addRange(int begin, int end){
	while (begin <= end){
		if (_count == _n)
			break ;
		_array.push_back(rand() % 99);
		_count++;
		begin++;
	}
}

void	Span::print(void) const{
	std::vector<int>::const_iterator begin = _array.begin();
	std::vector<int>::const_iterator end = _array.end();
	for(; begin != end; begin++)
		std::cout << *begin << " ";
	std::cout << std::endl;
}
