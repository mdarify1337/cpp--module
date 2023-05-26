/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:23:12 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 15:47:44 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", "human", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Presidential Pardon Form", target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf) : Form(ppf.getName(), ppf.getTarget(), ppf.getSignGrade(), ppf.getExecGrade()){
    if (ppf.getSigned())
        this->setSigned(1);
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf) {
    this->setSigned(ppf.getSigned());
    return ( *this );
}

void PresidentialPardonForm::executeAction() const{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}