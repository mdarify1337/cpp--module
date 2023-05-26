/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:53:06 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 15:11:54 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main () {
    try {
        Bureaucrat b1("Mohamed", 150);
        Form f1("Birth Certificat", 45);
        f1.beSigned(b1);
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