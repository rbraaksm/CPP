/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: renebraaksma <renebraaksma@student.42.f      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/04 13:18:23 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/04 13:51:14 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	std::cout << "New MateriaSource created" << std::endl;
	for(int i = 0; i <= 4; i++)
		this->_inventorySource[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &cpy){
	*this = cpy;
	return ;
}

MateriaSource&		MateriaSource::operator=(const MateriaSource &nw){
	if(this != &nw){
		for(int i = 0; i < 4; i++){
			this->_inventorySource[i] = nw._inventorySource[i];
			this->_sourceCount++;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void){
	for(int i = 0; i < 4; i++)
		delete this->_inventorySource[i];
	return ;
}

void	MateriaSource::learnMateria(AMateria *m){
	if(!m)
		std::cout << "Please send valid materia" << std::endl;
	else if (this->_sourceCount == 4){
		std::cout << "Inventory of Source Materia is full" << std::endl;
		delete m;
	}
	else{
		this->_inventorySource[this->_sourceCount] = m;
		std::cout << m->getType() << " was added to the Materia Source inventory" << std::endl;
		std::cout << "Inventory Source count is now: " << this->_sourceCount << std::endl;
		this->_sourceCount++;
	}
	return ;
}

AMateria*			MateriaSource::createMateria(std::string const &type){
	for(int i = 0; i < this->_sourceCount; i++){
		if (this->_inventorySource[i]->getType() == type){
			std::cout << type << " materia was created" << std::endl;
			return this->_inventorySource[i]->clone();
		}
	}
	std::cout << "This " << type << " is not in the inventory. No type created" << std::endl;
	return (NULL);
}
