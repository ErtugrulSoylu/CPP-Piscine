#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed(const Fixed &_Fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = _Fixed.getRawBits();
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int _value) {
    std::cout << "Int constructor called" << std::endl;
    this->value = _value << this->fract;
}

Fixed::Fixed(const float _value) {
    std::cout << "Float constructor called" << std::endl;
	this->value = (int)roundf(_value * (1 << this->fract));
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt() const {
    return this->value >> this->fract;
}

float Fixed::toFloat() const {
    return (float)this->value / (1 << this->fract);
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &Fix) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = Fix.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &Fix) {
    stream << Fix.toFloat();
    return stream;
}