/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:42:05 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:50:18 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP_
#define _WHATEVER_HPP_
#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T min(T &a, T &b)
{
    return (a < b ? a : b);
}

template<typename T>
T max(T &a, T &b)
{
    return (a > b ? a : b);
}
#endif