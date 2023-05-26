/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:10:00 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:22:38 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP
#define EMPTY ""
#include <iostream>
#include "Brain.hpp"
class Animal{
	protected :
		std::string _type;
	public :
		Animal();
		Animal(const Animal &oldObj);
		Animal &operator =(const Animal &oldObj);
		virtual ~Animal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	virtual void makeSound() const;
};
#endif