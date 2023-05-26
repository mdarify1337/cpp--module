/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 14:59:35 by mdarify           #+#    #+#             */
/*   Updated: 2023/05/18 11:18:34 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "clapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(CLAP_HITPOINTS), energyPoints(CLAP_ENERGYPOINTS), attackDamage(CLAP_ATTACKDAMAGE){
	std::cout << "ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(CLAP_HITPOINTS), energyPoints(CLAP_ENERGYPOINTS), attackDamage(CLAP_ATTACKDAMAGE){
	std::cout << "ClapTrap Paramiterized Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &oldObj){
	std::cout << "ClapTrap Copy Assignement Operator Called" << std::endl;
	this->Name = oldObj.Name;
	this->attackDamage = oldObj.attackDamage;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &oldObj) : Name(oldObj.Name), hitPoints(oldObj.hitPoints), energyPoints(oldObj.energyPoints), attackDamage(oldObj.attackDamage){
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

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

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->Name << " took " << amount << " of damage" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->energyPoints > 0)
	{
		std::cout << this->Name << " repaired himself" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else
		std::cout << this->Name << " doesn't have enough points to repair" << std::endl;
}

void ClapTrap::attack(const std::string &target){
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}