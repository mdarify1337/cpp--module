/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:58:32 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 00:08:21 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string Name) : name(Name), weapon(NULL){}

void HumanB ::setWeapon(Weapon &w){
    weapon = &w;
}

void    HumanB::attack() 
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
