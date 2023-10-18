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
    bool operator>(const Fixed &Fix) const;
    bool operator<(const Fixed &Fix) const;
    bool operator>=(const Fixed &Fix) const;
    bool operator<=(const Fixed &Fix) const;
    bool operator==(const Fixed &Fix) const;
    bool operator!=(const Fixed &Fix) const;
    Fixed operator+(const Fixed &Fix) const;
    Fixed operator-(const Fixed &Fix) const;
    Fixed operator*(const Fixed &Fix) const;
    Fixed operator/(const Fixed &Fix) const;
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--();
    Fixed operator--(int);
    static Fixed &max(Fixed &Fix1, Fixed &Fix2);
    static const Fixed &max(const Fixed &Fix1, const Fixed &Fix2);
    static Fixed &min(Fixed &Fix1, Fixed &Fix2);
    static const Fixed &min(const Fixed &Fix1, const Fixed &Fix2);
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