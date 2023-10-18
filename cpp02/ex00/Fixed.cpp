#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const Fixed &_Fixed) {
    std::cout << "Copy constructor called" << std::endl;
    this->value = _Fixed.getRawBits();
}

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
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
};