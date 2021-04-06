/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 13:19:20 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/04/02 13:51:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	std::vector<int>	_array;
	unsigned int		_n;
	unsigned int		_count;
	Span();
	public:
		Span(unsigned int n);
		Span(Span const &cpy);
		Span& operator=(Span const &nw);
		~Span();
		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();

		void	addRange(int begin, int end);
		void	print() const;
};
#endif
