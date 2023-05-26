/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:21:03 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:43:54 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//     Animal *animals[4];
//     for(int i = 0; i < 4; i++)
//     {
//         if (i % 2)
//             animals[i] = new  Cat();
//         else
//             animals[i] = new Dog();
//         animals[i]->makeSound();
//         delete animals[i];
////     }
     Dog basic;
     {
         Dog tmp = basic;
     }
    //////////////////////////////////
    Dog a;
    Dog v(a);

//    //////////////////////////////////
//    system("leaks brain");
    return 0;
}