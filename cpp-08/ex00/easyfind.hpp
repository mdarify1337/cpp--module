/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:29:50 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 23:30:10 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <array>
#include <vector>

template<typename T>
void easyfind(T &container, int i)
{
    if(std::find(container.begin(), container.end(), i) != container.end())
        std::cout << "this value exist" << std::endl;
    else
        std::cout << "this value does not exist " << std::endl;
}