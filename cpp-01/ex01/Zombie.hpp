/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:36:00 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 17:36:29 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>


class Zombie{

private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void    announce(void);
    void    setName(std::string Name);
};
Zombie* zombieHorde(int N, std::string Name );
#endif
