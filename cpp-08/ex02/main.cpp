/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:37:15 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:41:14 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MuntanStack.hpp"
#include <iostream>
int main()
{
    {
        
    MutantStack<int> m;

    for (int i = 0 ; i < 10; i++)
    {  
        m.push( i * 9);
    }
   


    MutantStack<int>::iterator it ;
     
     
     for (it = m.begin(); it != m.end(); ++it) {
        std::cout << *it << " ";
    }

        std::cout << std::endl;
    }




    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}