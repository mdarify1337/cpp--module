/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:01:24 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 20:02:04 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *strPTR = &str;
    std::string &strREF = str;
    std::cout << "STR ADDRESS : " << &str << std::endl;
    std::cout << "ADDRESS HELD BY strPTR : " << strPTR << std::endl;
    std::cout << "ADDRESS HELD BY strREF : " << &strREF << std::endl;
    std::cout << "STR VALUE : " << str << std::endl;
    std::cout << "THE VALUE POINTED BY strPTR : " << *strPTR << std::endl;
    std::cout << "THE VALUE POINTED BY strREF : " << strREF << std::endl;
}
