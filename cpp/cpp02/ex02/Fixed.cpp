/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:13:08 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/18 22:37:08 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fractional = 8;

Fixed::Fixed() : fixed(0) {
}
Fixed::Fixed(int const raw) {
    this->setRawBits(raw << fractional);
}
Fixed::Fixed(float const raw) {
    this->setRawBits(roundf(raw * (1 << fractional)));
}
Fixed::~Fixed() {
}
Fixed::Fixed(const Fixed &other) {
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
   if (this != &other)
   {
        fixed = other.getRawBits();
        fractional = other.fractional;
   }
   return *this;
}

bool Fixed::operator<(const Fixed &other) const {
    return (fixed < other.fixed);
}
bool Fixed::operator>(const Fixed &other) const {
    return (fixed > other.fixed);
}
bool Fixed::operator<=(const Fixed &other) const {
    return (fixed <= other.fixed);
}
bool Fixed::operator>=(const Fixed &other) const {
    return (fixed >= other.fixed);
}
bool Fixed::operator==(const Fixed &other) const {
    return (fixed == other.fixed);
}
bool Fixed::operator!=(const Fixed &other) const {
    return (other.fixed != this->fixed);
}

Fixed   Fixed::operator+(const Fixed &fixed) const {
    return Fixed(this->toFloat() + fixed.toFloat());
}
Fixed   Fixed::operator-(const Fixed &fixed) const {
    return Fixed(this->toFloat() - fixed.toFloat());
}
Fixed   Fixed::operator*(const Fixed &fixed) const {
    return Fixed(this->toFloat() * fixed.toFloat());
}
Fixed   Fixed::operator/(const Fixed &fixed) const {
    return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++() {
    //this->fixed++; nao se justifica pq ja tou no scope da classe
    fixed++;
    return (*this);
}

Fixed& Fixed::operator--(){
    fixed--;
    return (*this);
}

Fixed Fixed::operator++(int n){
    (void)n;
    Fixed temp(this->toFloat());
    fixed++;
    return temp;
}

Fixed Fixed::operator--(int n){
    (void)n;
    Fixed temp(this->toFloat());
    fixed--;
    return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b ? a : b);
}

void Fixed::setRawBits(const int raw){
    this->fixed = raw;
}

int Fixed::getRawBits() const {
    return this->fixed;
}

float Fixed::toFloat(void) const {
    return ((float)this->getRawBits() / (1 << fractional));
}

int Fixed::toInt(void) const {
    return (this->getRawBits() >> fractional);
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return (os);
}

