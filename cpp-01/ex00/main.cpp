
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:50:05 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/15 15:22:20 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        Zombie *z = newZombie("Mohamed");
        Zombie a("Youssef");
        a.announce();
        z->announce();
        randomChump("hello");
        delete z;
    }
    else
    {
        std::cout << "ERROR : --> INVALID PARAMETER OF ARGUMENTS" << std::endl;
        exit(0);
    }
}
