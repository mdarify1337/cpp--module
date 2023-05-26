/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:52:05 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 01:03:00 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->brain = new Brain();
	this->type = DOG;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &oldObj){
    this->brain = new Brain();
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Dog &Dog::operator=(const Dog &oldObj){
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	this->type = oldObj.type;
    *this->brain = *oldObj.brain;
	return (*this);
}

Dog::~Dog(){
    delete this->brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Dog sound: 🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶 " << std::endl;
}