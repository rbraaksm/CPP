/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:32:18 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/13 19:03:55 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Replace{
	std::ifstream	_myFile;
	std::ofstream	_newFile;
	std::string		_file;
	std::string		_newfile;
	std::string		_find;
	std::string		_replace;
	public:
		Replace();
		~Replace();
		void	setClass(std::string, std::string, std::string);
		void	replaceWords(void);
};
#endif
