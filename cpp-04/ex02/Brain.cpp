/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:51:01 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:54:41 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "have no idea";
    std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(const Brain &oldObj){
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = oldObj;
}

Brain& Brain::operator=(const Brain &oldObj){
	std::cout << "Brain Copy Assignment Operator Called" << std::endl;
	for (size_t i = 0; i < 100; i++)
        this->ideas[i] = oldObj.ideas[i];
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor Called" << std::endl;
}
Footer
