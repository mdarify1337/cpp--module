/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 23:55:17 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 00:07:28 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

 HumanA::HumanA(std::string Name, Weapon &weapon) : name(Name), weapon(weapon){}

void    HumanA::attack() 
{
        std::cout << name << " attacks with their " << weapon.getType() 
        << std::endl;
}
