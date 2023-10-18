#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>
#include <exception>

class Converter {
public:
    Converter();
    Converter(Converter &copy);
    Converter(std::string _str);
    Converter &operator=(Converter &assign);
    char getChar() const;
    int getInt() const;
    float getFloat() const;
    double getDouble() const;
    class ImpossibleConversion : public std::exception{
        virtual const char *what() const throw() {return "impossible";}
    };
    class NonDisplayable : public std::exception{
        virtual const char *what() const throw() {return "Non displayable";}
    };
    class NotConvertable : public std::exception{
        virtual const char *what() const throw() {return "input is not Convertable";}
    };
    void printChar() const;
    void printInt() const;
    void printFloat() const;
    void printDouble() const;
private:
    std::string str;
};

#endif