/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:36:59 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:10:15 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->hitPoints = FRAG_HITPOINTS;
	this->energyPoints = FRAG_ENERGYPOINTS;
	this->attackDamage = FRAG_ATTACKDAMAGE;
	std::cout << "FragTrap Constructor called " << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, FRAG_HITPOINTS, FRAG_ENERGYPOINTS, FRAG_ATTACKDAMAGE) {
	std::cout << "FragTrap Paramitrized Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &oldObj) {
	this->Name = oldObj.Name;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	this->attackDamage = oldObj.attackDamage;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &oldObj){
	std::cout << "FragTrap Copy Assignement Operator Called" << std::endl;
	this->Name = oldObj.Name;
	this->attackDamage = oldObj.attackDamage;
	this->hitPoints = oldObj.hitPoints;
	this->energyPoints = oldObj.energyPoints;
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target){
	if (this->energyPoints > 0)
	{
		std::cout << "FragTrap " << this->Name << " attacks " << target << " ,causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints--;
	}
	else
		std::cout << this->Name << " doesn't have enough points to attack" << std::endl;
}

void FragTrap::highFivesGuys() const{
	std::cout << "FragTrap " << this->Name << " asks for high fives"<< std::endl;
}