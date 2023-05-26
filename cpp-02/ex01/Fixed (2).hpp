/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:48:09 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 14:48:50 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#define CANT_SHIFT 256
#define ZERO 0

class Fixed
{
    private:
        int rawBits;
        static const int fractionalBits = 8;
    public:
        Fixed();
        Fixed(const int data);
        Fixed(const Fixed &oldObj);
        Fixed(const float data);
        ~Fixed();
        Fixed &operator= (const Fixed &oldObj);
        int getRawBits() const ;
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits(int const raw);
};

std::ostream& operator<< (std::ostream &ost, const Fixed &fixed);
#endif
