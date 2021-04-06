/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/11 09:47:37 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/11 11:34:43 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array{
	T				*_array;
	unsigned int	_n;
	public:
		Array() : _array(NULL), _n(0){};
		Array(unsigned int n) : _array(new T[n]), _n(n){};
		Array(Array const &cpy){
			this->_n = cpy._n;
			this->_array = new T[cpy._n];
			for (unsigned int i = 0; i < cpy._n; i++)
				this->_array[i] = cpy._array[i];
		};
		Array& operator=(Array const &nw){
			if (this == &nw)
				return (*this);
			this->_n = nw._n;
			if (this->_array)
				delete [] this->_array;
			this->_array = new T[nw._n];
			for (unsigned int i = 0; i < nw._n; i++)
				this->_array[i] = nw._array[i];
			return (*this);
		};
		T&	operator[](const unsigned int n) const{
			if (n >= this->_n || n < 0)
				throw std::out_of_range("Array is out of range!");
			else
				return (this->_array[n]);
		};
		~Array(){delete[] _array;};
		unsigned int	size() const {return (this->_n);};
		void	print() const{
			if (_n <= 0)
				std::cout << "Array is empty";
			else{
				std::cout << "Array: ";
				for (unsigned int i = 0; i < _n; i++)
					std::cout << _array[i] << " ";
			}
			std::cout << std::endl;
			return ;
		}
};
#endif
