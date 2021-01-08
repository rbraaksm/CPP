/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:38:00 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/07 16:24:16 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(void){
	return ;
}

Replace::~Replace(void){
	return ;
}

void	Replace::setClass(std::string _file, std::string _find, std::string _replace){
	file = _file;
	newfile = _file + ".replace";
	find = _find;
	replace = _replace;
	myFile.open(file);
	if (myFile.fail()){
		std::cout << "CANNOT OPEN FILE: " << _file << std::endl;
		exit(1);
	}
	newFile.open(newfile);
	if (newFile.fail()){
		std::cout << "CANNOT CREATE FILE: " << newfile << std::endl;
		exit(1);
	}
}

void	Replace::replaceWords(void){
	std::string	buff;
	size_t		pos = 0;
	while(std::getline(myFile, buff)){
		while (buff.find(find) != std::string::npos){
			pos = buff.find(find);
			buff.replace(pos, find.length(), replace);
			pos += replace.length();
			newFile << buff.substr(0, pos);
			buff = buff.substr(pos);
		}
		newFile << buff;
		newFile << std::endl;
	}
	myFile.close();
	newFile.close();
}
