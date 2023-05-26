/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:00:17 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 00:10:30 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string Type) {
    std::cout << "con" << std::endl;
    type = Type;
}

void    Weapon::setType(std::string Type){
    type = Type;
}

const std::string& Weapon::getType() {
    return (type);
}