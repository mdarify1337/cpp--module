/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:50:12 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:54:19 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP
#define EMPTY ""
#include <iostream>

class Animal{
	protected :
		std::string type;
	public :
		Animal();
		Animal(const Animal &oldObj);
		Animal &operator =(const Animal &oldObj);
		virtual ~Animal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	virtual void makeSound() const = 0;
};
#endif