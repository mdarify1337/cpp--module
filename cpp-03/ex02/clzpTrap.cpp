/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clzpTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:36:19 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:04:23 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hiou <ael-hiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 09:47:03 by ael-hiou          #+#    #+#             */
/*   Updated: 2022/11/20 09:47:52 by ael-hiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(HITPOINTS),  energyPoints(ENERGYPOINTS), attackDamage(ATTACKDAMAGE){
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &oldObj) : hitPoints(oldObj.hitPoints), energyPoints(oldObj.energyPoints), attackDamage(oldObj.attackDamage){
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(HITPOINTS),  energyPoints(ENERGYPOINTS), attackDamage(ATTACKDAMAGE){
	std::cout << "ClapTrap Paramiterized Constructor Called" << std::endl;
};

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : Name(name), hitPoints(hitPoints),  energyPoints(energyPoints), attackDamage(attackDamage){
	std::cout << "ClapTrap Paramiterized Constructor Called" << std::endl;

};
void ClapTrap::setAttackDamage(int value){
	this->attackDamage = value;
}

void ClapTrap::setEnergyPoints(int value){
	this->energyPoints = value;
}

void ClapTrap::setHitPoints(int value){
	this->hitPoints = value;
}

void ClapTrap::setName(std::string value){
	this->Name = value;
}

int ClapTrap::getAttackDamage() const{
	return (this->attackDamage);
}

int ClapTrap::getEnergyPoints() const{
	return (this->energyPoints);
}

int ClapTrap::getHitPoints() const{
	return (this->hitPoints);
}

std::string ClapTrap::getName() const{
	return (this->Name);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &oldObj){
	std::cout << "Copy Assignement Operator Called" << std::endl;
	this->Name = oldObj.Name;
	this->attackDamage = oldObj.attackDamage;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	return (*this);
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->Name << " took " << amount << " of damage" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->Name << " repaired himself" << std::endl;
	if (this->energyPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints -= 1;
	}
	else
		std::cout << this->Name << " doesn't have enough points to repair" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->energyPoints > 0)
	{
		std::cout << "clapTrap " << this->Name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
		
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}
