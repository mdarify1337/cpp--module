/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:00:11 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 15:00:49 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#define CLAP_HITPOINTS 10
#define CLAP_ENERGYPOINTS 10
#define CLAP_ATTACKDAMAGE 0

class ClapTrap
{
	private:
		std::string Name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &oldObj);
		ClapTrap &operator =(const ClapTrap &oldObj);
		~ClapTrap();
		int getHitPoints() const;
		int	getEnergyPoints() const;
		int	getAttackDamage() const;
		std::string getName() const;
		void setName(std::string value);
		void setHitPoints(int value);
		void setEnergyPoints(int value);
		void setAttackDamage(int value);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif