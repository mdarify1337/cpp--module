/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:21:44 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:55:23 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
//    const Animal* meta = new Animal();
//    const Animal* j = new Dog();
//    const Animal* i = new Cat();
    const WrongAnimal *meta1= new WrongAnimal();
    const WrongAnimal *i1 = new WrongCat();
////    std::cout << i->getType() << " " << std::endl;
////    std::cout << j->getType() << " " << std::endl;
//    j->makeSound();
//    i->makeSound(); //will output the cat sound!
    meta1->makeSound();
    i1->makeSound();
//    meta->makeSound();
    delete meta1;
    delete i1;
//    delete meta;
//    delete i;
//    delete j;
    return (0);
}
