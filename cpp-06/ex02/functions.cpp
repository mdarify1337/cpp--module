/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:01:56 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:24:54 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base::~Base(void){}

Base * generate(void)
{
    srand(time(NULL));
    int a = rand() % 3;
    switch (a)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return (NULL);
}
// dynamic_cast is a run time type check so it allows only the valid conversions  
// When we work with pointers , if the cast is not done a Null pointer is set in the assigning variable 
// When we work with references , an Bad_cast exeptions is throwed . and it need's to be catched .
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "This Base Object is an A Object" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "This Base Object is an B Object" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "This Base Object is an C Object" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast <A&>(p);
        // std::cout << "This Base Object is an A Object" << std::endl;
        identify(&a);
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast <B&>(p);
            // std::cout << "This Base Object is an B Object" << std::endl;
            identify(&b);
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast <C&>(p);
                // std::cout << "This Base Object is an C Object" << std::endl;
                identify(&c);
            }
            catch(const std::exception& e)
            {
                std::cout << e.what() << std::endl;
            }
        }
    }
}
