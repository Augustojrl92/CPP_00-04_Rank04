/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aurodrig <aurodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:08:15 by aurodrig          #+#    #+#             */
/*   Updated: 2025/04/22 22:47:57 by aurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP
#include "iostream"
#include "iomanip"
#include "string"
#include "cmath"

class Fixed
{
    private:
        int         fixed;
        static int  fractional;
    public:
        Fixed();
        Fixed(int const raw);
        Fixed(float const raw);
        Fixed(const Fixed &other);
	    ~Fixed();
	    Fixed& operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &fixed);

#endif