/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:02:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 17:27:48 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <unistd.h>

int main()
{
    while(1)
    {
        Base *ptr = generate();
        identify(ptr);
        Base &ptr2 = *ptr;
        identify(ptr2);
        sleep(2);
    }
}