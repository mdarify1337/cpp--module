/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:28:30 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 14:40:01 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main () {
    try {
        Bureaucrat b1("Mohamed", 150);
        b1 = Bureaucrat("Darify", 2);
    }
    catch (std::exception & e)
    {
       std::cout<< e.what() << std::endl;
    }
    try {
        Bureaucrat b1("Mohamed", 1);
        b1.incrementGrade();
    }
    catch (std::exception & e)
    {
       std::cout<< e.what() << std::endl;
    }
    try {
        Bureaucrat b1("Mohamed", 45);
        b1.decrementGrade();
        std::cout<< b1 << std::endl;
    }
    catch (std::exception & e)
    {
       std::cout<< e.what() << std::endl;
    }
    
}