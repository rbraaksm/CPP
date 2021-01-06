/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:32:18 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/06 10:22:41 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>

class Replace{
	public:
		Replace();
		~Replace();
		void	setClass(std::string, std::string, std::string);
		void	replaceWords(void);

	private:
		std::ifstream	myFile;
		std::ofstream	newFile;
		std::string		file;
		std::string		newfile;
		std::string		find;
		std::string		replace;
};
#endif
