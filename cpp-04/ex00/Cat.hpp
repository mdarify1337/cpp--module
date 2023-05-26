/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:00:38 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 18:46:50 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP
#define _CAT_HPP
#include "Animal.hpp"
#define CAT "CAT"

class Cat : public Animal
{
public :
    Cat();
    Cat(const Cat &oldObj);
    Cat &operator =(const Cat &oldObj);
    ~Cat();
    void makeSound() const;
};
#endif