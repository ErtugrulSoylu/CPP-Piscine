#include "Fixed.hpp"
#include <iostream>
#include <math.h>

Fixed::Fixed(const Fixed &_Fixed) {
    this->value = _Fixed.getRawBits();
}

Fixed::Fixed() {
    this->value = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(const int _value) {
    this->value = _value << this->fract;
}

Fixed::Fixed(const float _value) {
	this->value = (int)roundf(_value * (1 << this->fract));
}

int Fixed::toInt() const {
    return this->value >> this->fract;
}

float Fixed::toFloat() const {
    return (float)this->value / (1 << this->fract);
}

int Fixed::getRawBits() const {
    return this->value;
}

void Fixed::setRawBits(int const raw) {
    this->value = raw;
}

std::ostream &operator<<(std::ostream &stream, Fixed const &Fix) {
    stream << Fix.toFloat();
    return stream;
}

Fixed &Fixed::operator=(const Fixed &Fix) {
    this->value = Fix.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &Fix) const {
    return this->toFloat() > Fix.toFloat();
}

bool Fixed::operator<(const Fixed &Fix) const {
    return this->toFloat() < Fix.toFloat();
}

bool Fixed::operator>=(const Fixed &Fix) const {
    return this->toFloat() >= Fix.toFloat();
}

bool Fixed::operator<=(const Fixed &Fix) const {
    return this->toFloat() <= Fix.toFloat();
}

bool Fixed::operator==(const Fixed &Fix) const {
    return this->toFloat() == Fix.toFloat();
}

bool Fixed::operator!=(const Fixed &Fix) const {
    return this->toFloat() != Fix.toFloat();
}

Fixed Fixed::operator+(const Fixed &Fix) const {
    return Fixed(this->toFloat() + Fix.toFloat());
}

Fixed Fixed::operator-(const Fixed &Fix) const {
    return Fixed(this->toFloat() - Fix.toFloat());
}

Fixed Fixed::operator*(const Fixed &Fix) const {
    return Fixed(this->toFloat() * Fix.toFloat());
}

Fixed Fixed::operator/(const Fixed &Fix) const {
    return Fixed(this->toFloat() / Fix.toFloat());
}

Fixed Fixed::operator++() {
    this->value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->value++;
    return tmp;
}

Fixed Fixed::operator--() {
    this->value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->value--;
    return tmp;
}

Fixed &Fixed::max(Fixed &Fix1, Fixed &Fix2) {
    return Fix1 > Fix2 ? Fix1 : Fix2;
}

const Fixed &Fixed::max(const Fixed &Fix1, const Fixed &Fix2) {
    return Fix1 > Fix2 ? Fix1 : Fix2;
}

Fixed &Fixed::min(Fixed &Fix1, Fixed &Fix2) {
    return Fix1 < Fix2 ? Fix1 : Fix2;
}

const Fixed &Fixed::min(const Fixed &Fix1, const Fixed &Fix2) {
    return Fix1 < Fix2 ? Fix1 : Fix2;
}