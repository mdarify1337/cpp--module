/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:49:39 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/19 15:34:18 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string Name)
{
    Zombie *zombie = new Zombie(Name);
    return zombie;
}

void    randomChump(std::string Name)
{
    Zombie zombie(Name);
    zombie.announce();
}

void    Zombie::announce(void)
{
    std::cout << name << "BraiiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string Name) : name(Name)
{
    std::cout << "contrutor called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructor called" << std::endl;
}
