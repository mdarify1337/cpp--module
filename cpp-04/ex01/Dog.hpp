/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:20:42 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:43:19 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP
#define DOG "DOG"
#include "Animal.hpp"
class Dog : public Animal
{
	public:
		Brain *brain;
	public:
	  Dog();
	  Dog(const Dog &oldObj);
	  Dog &operator =(const Dog &oldObj);
	  ~Dog();
	  void makeSound() const;
};
#endif