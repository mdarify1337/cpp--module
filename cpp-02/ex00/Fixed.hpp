/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:41:30 by mdarify           #+#    #+#             */
/*   Updated: 2023/05/12 18:29:24 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#define ZERO 0
#include <iostream>

class Fixed
{
private:
    int rawBits;
    static const int fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &oldObj);
    Fixed &operator= (const Fixed &oldObj);
    ~Fixed();
    int getRawBits() const ;
    void setRawBits(int const raw);
};
#endif
