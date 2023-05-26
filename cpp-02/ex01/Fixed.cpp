/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:46:55 by mdarify           #+#    #+#             */
/*   Updated: 2023/05/15 21:03:29 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    rawBits = ZERO;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int data) : rawBits(data << fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float data) : rawBits(roundf(data * (CANT_SHIFT)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oldObj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}


std::ostream& operator<< (std::ostream &ost, const Fixed &fixed)
{
    ost << fixed.toFloat();
    return (ost);
}

float Fixed::toFloat( void ) const
{
    return (((float) getRawBits() / (CANT_SHIFT)));
}

int Fixed::toInt() const
{
    return (getRawBits() >> fractionalBits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &oldObj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(oldObj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits(const int raw)
{
    rawBits = raw;
}

int Fixed::getRawBits() const
{
    return (rawBits);
}
