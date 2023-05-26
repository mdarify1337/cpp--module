/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:19:52 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:42:21 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	this->brain = new Brain();
	this->_type = CAT;
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &oldObj){
	std::cout << "Cat Copy Constructor Called" << std::endl;
    this->brain = new Brain();
	*this = oldObj;
}

Cat& Cat::operator =(const Cat &oldObj){
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
	*this->brain = *oldObj.brain;
	this->_type = oldObj._type;
	return (*this);
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat sound: 🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱" << std::endl;
}