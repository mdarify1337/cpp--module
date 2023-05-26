/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:04:30 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 15:22:03 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#define SCAV_HITPOINT 100
#define SCAV_ENERGYPOINTS 50
#define SCAV_ATTACKDAMAGE 20
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public :
		ScavTrap();
		ScavTrap(const ScavTrap &oldObj);
		ScavTrap &operator=(const ScavTrap &oldObj);
		ScavTrap(std::string name);
		~ScavTrap();
		void guardGate() const;
		void attack (const std::string &target);
};
#endif