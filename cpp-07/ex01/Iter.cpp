/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:53:13 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:55:02 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP_
#define _ITER_HPP_

#include <iostream>

template<typename T>
void function(T value){
    std::cout << value << std::endl;
}
template<typename T>
void fun(T* array, int arraySize, void(*foo)(T value))
{
    for (int i = 0; i < arraySize; i++)
        foo(array[i]);
};

#endif