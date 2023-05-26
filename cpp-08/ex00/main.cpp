/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:29:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:29:41 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main()
{
    std::cout << "----------trying with Array-------- " << std::endl;
    
    std::array<int, 5> arr = {1, 2 ,3 ,4, 5};
    easyfind(arr, 6);
    easyfind(arr, 5);


    std::cout << "-------trying with Vector---------" << std::endl;

    std::vector<int> vec;


    for(int i = 1; i <= 10; i++)
        vec.push_back(i);
        

    easyfind(vec, 5);  
    easyfind(vec, 10);
    easyfind(vec, 100);  
     
    std::cout << "-------trying with List---------" << std::endl;
    
    std::list<int> lst;

    
    for (int i = 0; i < 10; i++) 
    {
        lst.push_back(i); 
    }
    easyfind(lst, 0);  
    easyfind(lst, 9);
    easyfind(lst, 10);  
    
    return 0;
} 