/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:01:01 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/25 18:51:51 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"

int main()
{
	ClapTrap b("Youssef");
	ClapTrap a("Mohamed");
	a.attack("Youssef");
	b.takeDamage(0);
	b.attack("ayoub");
	a.takeDamage(0);
	a.beRepaired(0);
	b.beRepaired(0);
 	return 0;
}
