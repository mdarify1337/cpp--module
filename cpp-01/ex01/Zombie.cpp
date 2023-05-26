/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:37:20 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 17:37:45 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string Name){
        name = Name;
}

void Zombie::announce(void){
    std::cout << name << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() {
    std::cout << "Constructor Called" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Destructor Called" << std::endl;
}
