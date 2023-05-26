/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:50:01 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:54:02 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type(EMPTY){
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(const Animal &oldObj){
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Animal &Animal::operator=(const Animal &oldObj){
	std::cout << "Animal Copy Assignment Operator Called" << std::endl;
	this->type = oldObj.type;
	return (*this);
}

void Animal::setType(std::string enteredType){
	this->type = enteredType;
}

std::string Animal::getType() const{
	return (this->type);
}

Animal::~Animal(){
	std::cout << "Animal Destructor Called" << std::endl;
}