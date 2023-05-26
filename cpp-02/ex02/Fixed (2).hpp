/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:53:16 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 14:55:07 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#define EPSILON 0.00390625
#define CANT_SHIFT 256
#include <cmath>
#include <iostream>
#include <string.h>
class Fixed
{
    private:
        int rawBits;
        const static int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int data);
        Fixed(const Fixed &oldObj);
        Fixed(const float data);
        ~Fixed();
        bool    operator > (const Fixed &oldObj) const ;
        bool    operator < (const Fixed &oldObj) const ;
        bool    operator >= (const Fixed &oldObj) const ;
        bool    operator <= (const Fixed &oldObj) const ;
        bool    operator == (const Fixed &oldObj) const ;
        bool    operator != (const Fixed &oldObj) const ;
        Fixed   operator +(const Fixed &oldObj);
        Fixed   operator -(const Fixed &oldObj);
        Fixed   operator *(const Fixed &oldObj);
        Fixed   operator /(const Fixed &oldObj);
        Fixed   &operator ++();
        Fixed   operator ++(int);
        Fixed   &operator --();
        Fixed   operator --(int);
        Fixed   &operator = (const Fixed &oldObj);
        int     getRawBits() const ;
        float   toFloat( void ) const;
        int     toInt( void ) const;
        void    setRawBits(int const raw);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
};
std::ostream& operator<< (std::ostream &ost, const Fixed &fixed);
#endif
