/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:06 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:23:25 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP


#include <iostream>

class Data
{
    public:
        std::string str;
        int i;
        char c;
        float f;

};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
std::ostream& operator<<(std::ostream& o, Data const& data);
#endif