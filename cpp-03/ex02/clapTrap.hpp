/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:36:30 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:05:06 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H
#include <iostream>
#define HITPOINTS 10
#define ENERGYPOINTS 10
#define ATTACKDAMAGE 0

class ClapTrap{
	protected:
		std::string Name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &oldObj);
		ClapTrap &operator =(const ClapTrap &oldObj);
		~ClapTrap();
		int	getHitPoints() const;
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