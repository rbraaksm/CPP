/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 09:17:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/10 15:58:20 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void    printAll(Convert *value, int prec){
    value->printChar();
    value->printInt();
    value->printDoubleAndFloat(prec);
    delete value;
    exit(0);
}

void    doubleAndFloat(Convert *value, std::string literal){
    int dot = 0;
    int _float = 0;
    int _prec = 1;
    int i = 0;
    if (literal[i] == '-')
        i++;
    for (; literal[i]; i++){
        if (!isdigit(literal[i]) && literal[i] != '.')
            return ;
        if (literal[i] == '.')
            dot++;
        if (literal[i + 1] == 'f' && !literal[i + 2]){
            _float = 1;
            break ;
        }
        if (dot == 1 && isdigit(literal[i]))
            _prec++;
    }
    if (dot > 1)
        return ;
    if (_float == 1)
        value->setType("float");
    else
        value->setType("double");
    value->setChar(static_cast<char>(value->getDouble()));
    value->setInt(static_cast<int>(atof(literal.c_str())));
    value->setDoubleAndFloat();
    printAll(value, _prec);
}

void    integer(Convert *value, std::string literal){
    if (literal[0] != '-' && !isdigit(literal[0]))
        return ;
    for (int i = 1; literal[i]; i++){
        if (!isdigit(literal[i]))
            return ;
    }
    value->setType("int");
    value->setInt(atof(literal.c_str()));
    value->setChar(static_cast<char>(value->getInt()));
    value->setDoubleAndFloat();
    printAll(value, 1);
}

void    character(Convert *value, std::string literal){
    if (isprint(literal[0]) && !isdigit(literal[0]) && literal.length() == 1){
        value->setType("char");
        value->setChar(literal[0]);
        value->setInt(static_cast<char>(value->getChar()));
        value->setDoubleAndFloat();
        printAll(value, 1);
    }
}

void    printPseudo(std::string pseudo){
    std::cout << "Type:\tPseudo Literals" << std::endl;
    std::cout << "char:\t" << "impossible" << std::endl;
    std::cout << "int:\t" << "impossible" << std::endl;
    if (pseudo == "-inff" || pseudo == "-inf")
        std::cout << "float:\t-inff" << std::endl << "double:\t-inf" << std::endl;
    else if (pseudo == "+inff" || pseudo == "+inf")
        std::cout << "float:\t+inff" << std::endl << "double:\t+inf" << std::endl;
    else if (pseudo == "nanf" || pseudo == "nan")
        std::cout << "float:\tnanf" << std::endl << "double:\tnan" << std::endl;
    exit(0);
}

void    start_convert(std::string literal){
    Convert *value =  new Convert(literal);
    const char *pseudo[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    for (int i = 0; i < 6; i++){
        if (pseudo[i] == literal)
            printPseudo(pseudo[i]);
    }
    character(value, literal);
    integer(value, literal);
    doubleAndFloat(value, literal);
    std::cout << "Incorrect input" << std::endl;
    delete value;
}

int main(int ac, char **av){
    if (ac == 1)
        std::cout << "Please type an argument" << std::endl;
    else if (ac != 2)
        std::cout << "Please type only one argument" << std::endl;
    else
        start_convert(av[1]);
    return (0);
}
