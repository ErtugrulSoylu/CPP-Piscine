#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed {
public:
    Fixed();
    Fixed(int _value);
    Fixed(const Fixed &Fix);
    Fixed &operator=(const Fixed &Fix);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
private:
    int value;
    static const int fract = 8;

};

#endif