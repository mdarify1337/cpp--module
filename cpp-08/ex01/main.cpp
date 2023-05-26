/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:31:18 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:32:51 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"

int main()
{
    try{
    /*subject test :D*/
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;   
    }


    /*test with 1000*/
{
    std::cout << "second try" << std::endl;
    
    Span sp = Span(10000);
    
    for (int i = 0 ; i < 9998; i++)
    {
        srand(time(NULL));
        
        sp.addNumber(rand() % 1000);
    }

        sp.addNumber(11);
        sp.addNumber(100);
        sp.addNumber(50);
      //sp.addNumber(50);
}

 std::cout << "last try" << std::endl;
    
    Span sp = Span(7);

    
        std::vector<int> lst;

        // defining an iterator

        for (int i = 0; i < 7; i++) 
        {
            // adding element to the back
            lst.push_back(i); 
        }

        sp.addNumber(lst.begin(), lst.end());

        
        sp.print_span();
     
    }catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
} 