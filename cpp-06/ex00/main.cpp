/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:22:45 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main (int argc, char **argv) {
  double d = 0;
  float f = 0;

  if (argc != 2)
    return (1);
  try
  {
    f = std::stof(argv[1]);

    display_char(f);
    display_int(f);
    std::cout << "float  : " << f << std::endl;
  }
  catch(const std::exception& e)
  {
    if (errno == ERANGE)
    {
      std::cerr << "char   : inff" << std::endl;
      std::cerr << "int    : inff" << std::endl;
      std::cerr << "float  : inff" << std::endl;
    }
    else
    {
      std::cerr << "char   : impossible" << std::endl;
      std::cerr << "int    : impossible" << std::endl;
      std::cerr << "float  : nanf" << std::endl;
    }
  }

  try
  {
    d = std::stod(argv[1]);

    std::cout << "double : " << d << std::endl;
  }
  catch(const std::exception& e)
  {
    if (errno == ERANGE)
    {
      std::cerr << "double : inff" << std::endl;
    }
    else
    {
      std::cerr << "double : nan" << std::endl;
    }
  }
}
