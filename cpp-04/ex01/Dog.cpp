/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:20:28 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:42:59 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	this->brain = new Brain();
	this->_type = DOG;
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(const Dog &oldObj){
	std::cout << "Dog Copy Constructor Called" << std::endl;
	this->brain = new Brain();
	*this = oldObj;
}

Dog &Dog::operator=(const Dog &oldObj){
	std::cout << "Dog Copy Assignment Operator Called" << std::endl;
	this->_type = oldObj._type;
	*this->brain = *oldObj.brain;
	return (*this);
}

Dog::~Dog(){
	std::cout << "Dog Destructor Called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const{
	std::cout << "Dog sound: 🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶 " << std::endl;
}