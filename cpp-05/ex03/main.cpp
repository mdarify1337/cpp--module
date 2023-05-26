/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:21:59 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 15:52:22 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>

int main() {

	Intern i;
	Form* rrf;
	Bureaucrat* b1 = new Bureaucrat("b1", 1);
	try
	{
		rrf = i.makeForm("shrubber", "target");
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		if (rrf){
		b1->signForm(*rrf);
		b1->executeForm(*rrf);}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	delete b1;
	return 0;
}