/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:23:38 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
    Data *ptr = new Data;

    ptr->i = 33;
    ptr->c = 'a';
    ptr->str = "friend";
    ptr->f = 3.3f;
    std::cout << *ptr ;

    Data *n = deserialize(serialize(ptr));
    // uintptr_t p = (uintptr_t)ptr;
    // Data *n = (Data *)p;
    std::cout << "*********" << std::endl;
    std::cout << *n ;

    // std::cout << sizeof(uintptr_t) << std::endl;
}