/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:04:29 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 18:59:26 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->_type = WrongCAT;
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &oldObj){
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = oldObj;
}

WrongCat& WrongCat::operator =(const WrongCat &oldObj){
	std::cout << "WrongCat Copy Assignment Operator Called" << std::endl;
	this->_type = oldObj._type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor Called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "Cat sound: 🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱🐱" << std::endl;
}
