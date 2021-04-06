/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 15:38:00 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/01/18 14:56:17 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(void){
	return ;
}

Replace::~Replace(void){
	return ;
}

void	Replace::setClass(std::string file, std::string find, std::string replace){
	_file = file;
	_newfile = file + ".replace";
	_find = find;
	_replace = replace;
	_myFile.open(file);
	if (_myFile.fail()){
		std::cout << "CANNOT OPEN FILE: " << file << std::endl;
		exit(1);
	}
	_newFile.open(_newfile);
	if (_newFile.fail()){
		std::cout << "CANNOT CREATE FILE: " << _newfile << std::endl;
		exit(1);
	}
}

void	Replace::replaceWords(void){
	std::string	buff;
	size_t		pos = 0;
	while(std::getline(_myFile, buff)){
		while (buff.find(_find) != std::string::npos){
			pos = buff.find(_find);
			buff.replace(pos, _find.length(), _replace);
			pos += _replace.length();
			_newFile << buff.substr(0, pos);
			buff = buff.substr(pos);
		}
		_newFile << buff;
		_newFile << std::endl;
	}
	_myFile.close();
	_newFile.close();
}
