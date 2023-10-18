#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>

class Span {
public:
    // const
    Span();
    Span(int n);
    
    // dest
    ~Span();

    // copy
    Span(Span const &copy);
    Span &operator=(Span const &arr);

    // oper
    Span operator&=(Span const &other);

    // memb
    void addNumber(int number);
    template<typename InputIterator>
	void addNumber(InputIterator begin, InputIterator end);
    int shortestSpan();
    int longestSpan();

    //excep
    class IndexOutOfBoundsException : public std::exception {
        virtual const char * what() const throw() {return "Index out of bounds.";}
    };
    class NoSpanException : public std::exception {
        virtual const char * what() const throw() {return "No span found.";}
    };
    class ArrayCreationException : public std::exception {
        virtual const char * what() const throw() {return "Span cant be created.";}
    };
    class FullSpanException : public std::exception {
        virtual const char * what() const throw() {return "Span is full.";}
    };
public:
    int length;
    std::vector<int> vec;
    int i;
};

#endif