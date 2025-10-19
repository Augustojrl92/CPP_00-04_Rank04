/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:39:05 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/18 22:39:20 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0) , y(0){
}

Point::Point(const float x, const float y) : x(x), y(y) {}
Point::Point(const float delta) : x(delta), y(delta) {}

Point::~Point(){
}

Point::Point(const Point &other) {
    *this = other;
}

Point& Point::operator=(const Point &other)
{
    const_cast<Fixed&>(this->x) = other.getX();
    const_cast<Fixed&>(this->y) = other.getY();
    return *this;
}

const Fixed &Point::getX() const {
    return x;
}

const Fixed &Point::getY() const {
    return y;
}