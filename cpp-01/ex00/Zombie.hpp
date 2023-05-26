/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:49:53 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/22 22:48:20 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <stdlib.h>

class Zombie{
private:
    std::string name;
public:
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);
};
Zombie* newZombie( std::string Name );
void   randomChump( std::string Name );
#endif