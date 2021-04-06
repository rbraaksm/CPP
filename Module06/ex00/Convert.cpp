/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 09:58:54 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/10 16:05:55 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _type(""){
    return ;
}

Convert::Convert(std::string literal) : _literal(literal),  _type(""){
    return ;
}

Convert::Convert(Convert const &cpy){
    *this = cpy;
    return ;
}

Convert&    Convert::operator=(Convert const &nw){
    if (this != &nw){
        _literal = nw._literal;
        _type = nw._type;
        _char = nw._char;
        _nb = nw._nb;
        _float = nw._float;
        _double = nw._double;
    }
    return (*this);
}

Convert::~Convert(void){
    return ;
}

void    Convert::setType(std::string type){
    _type = type;
    return ;
}

void    Convert::setChar(char c){
    _char = c;
    return ;
}

char    Convert::getChar(void) const{
    return (_char);
}

void    Convert::setInt(double n){
    _nb = n;
    return ;
}

int     Convert::getInt(void) const{
    return (_nb);
}

void    Convert::setDoubleAndFloat(){
    if (_type == "char"){
        _double = static_cast<double>(_char);
        _float = static_cast<float>(_char);
    }
    else{
        _double = atof(_literal.c_str());
        _float = atof(_literal.c_str());
    }
    return ;
}

double  Convert::getDouble(void) const{
    return (_double);
}

void    Convert::printChar(void) const{
    std::cout << "type:\t" << _type << std::endl;
    std::cout << "char:\t";
    if (isprint(this->_char))
        std::cout << "'" << _char << "'" << std::endl;
    else
        std::cout << "non displayable" << std::endl;
    return ;
}

void    Convert::printInt(void) const{
    std::cout << "int:\t";
    if (_nb < INT_MIN || _nb > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << _nb << std::endl;
    return ;
}

void    Convert::printDoubleAndFloat(int prec) const{
    std::cout << "float:\t" << std::fixed << std::setprecision(prec) << _float << "f" << std::endl;
    std::cout << "double:\t" << std::fixed << std::setprecision(prec) << _double << std::endl;
    return ;
}
