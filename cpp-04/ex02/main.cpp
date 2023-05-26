/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:48:58 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 01:03:45 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
int main()
{
//    Animal a;
    Animal *a = new Cat();
    Animal *a1 = new Dog();
    a->makeSound();
    a1->makeSound();
//    Dog d;
//    Dog c(d);
//    Cat b;
//    Cat x;
//    x = b;
//    d.makeSound();
//    d.makeSound();
//    x.makeSound();
//    b.makeSound();
}