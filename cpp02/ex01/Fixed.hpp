#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed {
public:
    Fixed();
    Fixed(const int _value);
    Fixed(const float _value);
    Fixed(const Fixed &Fix);
    Fixed &operator=(const Fixed &Fix);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    int toInt() const;
    float toFloat() const;
private:
    int value;
    static const int fract = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &Fix);

#endif