/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:02:23 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 18:51:19 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_HPP
#define __WRONG_ANIMAL_HPP
#define EMPTY ""
#include <iostream>

class WrongAnimal{
	protected :
		std::string _type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal &oldObj);
		WrongAnimal &operator =(const WrongAnimal &oldObj);
		~WrongAnimal();
	  	std::string getType() const;
      	void setType(std::string enteredType);
	  	void makeSound() const;
};
#endif