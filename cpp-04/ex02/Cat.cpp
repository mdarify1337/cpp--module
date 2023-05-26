/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:51:28 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 01:02:02 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
    this->brain = new Brain();
	this->type = CAT;
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(const Cat &oldObj){
    this->brain = new Brain();
	std::cout << "Cat Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Cat& Cat::operator =(const Cat &oldObj){
	std::cout << "Cat Copy Assignment Operator Called" << std::endl;
    *this->brain = *oldObj.brain;
	this->type = oldObj.type;
	return (*this);
}

Cat::~Cat(){
    delete this->brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Cat sound: 🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱" << std::endl;
}