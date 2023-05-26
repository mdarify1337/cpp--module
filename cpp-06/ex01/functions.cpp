/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:01:56 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:23:05 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// static_cast is a compile time casting that dont allow to run a code if it's not safe to run .

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

std::ostream& operator<<(std::ostream& o, Data const& data)
{
    o << "int i = " << data.i << std::endl;
    o << "char c = " << data.c << std::endl;
    o << "string str = " << data.str << std::endl;
    o << "float f = " << data.f << std::endl;
    return (o);
}