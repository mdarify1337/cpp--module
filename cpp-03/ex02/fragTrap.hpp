/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:11:20 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 17:11:25 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#define FRAG_HITPOINTS 100
#define FRAG_ENERGYPOINTS 100
#define FRAG_ATTACKDAMAGE 30
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &oldObj);
		FragTrap &operator =(const FragTrap &oldObj);
		~FragTrap();
		void attack(const std::string &target);
		void highFivesGuys() const;
};
#endif