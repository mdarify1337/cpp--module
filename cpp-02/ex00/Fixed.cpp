/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:36 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 14:42:56 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(ZERO)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &oldObj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = oldObj;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &oldObj){
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(oldObj.getRawBits());
    return (*this);
}

void    Fixed::setRawBits(const int raw) {
    rawBits = raw;
}

int     Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (rawBits);
}
