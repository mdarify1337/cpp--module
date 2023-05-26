/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:51:54 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 01:02:23 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#define CAT "CAT"

class Cat : public Animal{
private:
    Brain *brain;
public :
    Cat();
    Cat(const Cat &oldObj);
    Cat &operator =(const Cat &oldObj);
    ~Cat();
    void makeSound() const;
};
#endif