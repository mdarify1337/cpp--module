/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:20:07 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:42:39 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#define CAT "CAT"

class Cat : public Animal{
	public:
            Brain *brain;
	public :
	  Cat();
	  Cat(const Cat &oldObj);
	  Cat &operator =(const Cat &oldObj);
	  ~Cat();
	  void makeSound() const;
};
#endif