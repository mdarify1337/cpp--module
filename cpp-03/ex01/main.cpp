/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:04:37 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 15:21:04 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Mohamed");
	std::cout << a.getAttackDamage() << std::endl;
	a.attack("unknown");
	a.takeDamage(5);
	a.guardGate();
	ScavTrap b(a);
	b.attack("unknown");
	b.takeDamage(4);
	b.beRepaired(20);
	ScavTrap c = b;
	std::cout << c.getName() << std::endl;
	c.attack("unknown");
}
