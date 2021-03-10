/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <rbraaksm@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/10 09:17:49 by rbraaksm      #+#    #+#                 */
/*   Updated: 2021/03/10 16:03:17 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>

class Convert{
    std::string _literal;
    std::string _type; // nothing = ""
    char        _char;
    double      _nb;
    float       _float;
    double      _double;
    public:
        Convert();
        Convert(std::string literal);
        Convert(Convert const &cpy);
        Convert& operator=(Convert const &nw);
        ~Convert();
        void           setType(std::string type);
        void           setChar(char c);
        char           getChar(void) const;
        void           setInt(double n);
        int            getInt(void) const;
        void           setDoubleAndFloat();
        double         getDouble(void) const;
        void           printChar(void) const;
        void           printInt(void) const;
        void           printDoubleAndFloat(int prec) const;
};
#endif
