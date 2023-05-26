/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:01:56 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:20:03 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void display_char(float d)
{
    char c;
    c = static_cast<char>(d);
    if (isprint(c))
      std::cout << "char   : '" << c << "'" << std::endl;
    else
      std::cout << "char   : Non displayable" << std::endl;
}

void  display_int(float d)
{
    if (d <= INT_MAX && d >= INT_MIN)
    {
      int i ;
      i = static_cast<int> (d);
      std::cout << "int    : " << i << std::endl;
    }
    else
    {
      if (d > INT_MAX)
        std::cout << "int    : +inff" << std::endl;
      else
        std::cout << "int    : -inff" << std::endl;
    }
}