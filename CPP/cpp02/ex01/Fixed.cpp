/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:13:08 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/18 22:14:05 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fractional = 8;

Fixed::Fixed() : fixed(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw){
    std::cout << "Int constructor called" << std::endl;
    this->setRawBits(raw << fractional);
}

Fixed::Fixed(float const raw){
    std::cout << "Float constructor called" << std::endl;
    this->setRawBits(roundf(raw * (1 << fractional)));
}

Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed &other)
{
   std::cout << "Copy assignment operator called" << std::endl;
   if (this != &other) {
        fixed = other.getRawBits();
   }
   return *this;
}

int Fixed::getRawBits() const{
    return fixed;
}

void Fixed::setRawBits(const int raw){
    this->fixed = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->getRawBits() / (1 << fractional));
}

int Fixed::toInt(void) const
{
    return (this->getRawBits() >> fractional);
}

std::ostream& operator<<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return (os);
}