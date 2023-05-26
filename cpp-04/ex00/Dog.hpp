/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:48:06 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 18:48:11 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP
#define DOG "DOG"
#include "Animal.hpp"
class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &oldObj);
    Dog &operator =(const Dog &oldObj);
    ~Dog();
    void makeSound() const;
};
#endif