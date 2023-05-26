/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:38:43 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 17:51:48 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string Name)
{
    Zombie *zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(Name);
        zombies[i].announce();
    }
    return (zombies);
}
