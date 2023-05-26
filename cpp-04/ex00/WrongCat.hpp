/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:04:42 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/16 19:01:33 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONG_CAT_HPP
#define _WRONG_CAT_HPP
#include "WrongAnimal.hpp"
#define WrongCAT "WRONGCAT"
class WrongCat : public WrongAnimal
{
	public :
	  WrongCat();
	  WrongCat(const WrongCat &oldObj);
	  WrongCat &operator =(const WrongCat &oldObj);
	  ~WrongCat();
	  void makeSound() const;
};
#endif