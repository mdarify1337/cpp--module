/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 00:00:25 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 00:11:18 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string Type);
        void setType(std::string Type);
        const std::string& getType();
};
#endif