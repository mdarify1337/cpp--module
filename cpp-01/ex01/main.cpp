/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:38:00 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 17:38:26 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(10, "Ayoub");
    Zombie *zombiesHelloWorld = zombieHorde(2, "HelloWorld");
    delete [] zombiesHelloWorld;
    delete[] zombies;
}
