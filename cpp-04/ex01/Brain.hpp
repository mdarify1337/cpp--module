/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 00:19:27 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 00:41:38 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP
#define __BRAIN_HPP
#include <iostream>
class Brain{
	public :
		std::string ideas[100];
	public :
	  Brain();
	  Brain(const Brain &oldObj);
	  Brain &operator =(const Brain &oldObj);
	  ~Brain();
};
#endif