/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:28:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 14:34:51 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name ("default_name"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string n, int g) : _name (n){
    if (g < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    if (g > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) : _name (b._name){
    if (b._grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    if (b._grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    _grade = b._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& b) {
    if (b._grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (b._grade > 150) 
        throw Bureaucrat::GradeTooLowException();
    //_name = b._name;//check1
    _grade = b._grade;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& b) {
    return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}

std::string Bureaucrat::getName ( void ) const {
    return (_name);
}

int Bureaucrat::getGrade ( void ) const {
    return (_grade);
}

void Bureaucrat::incrementGrade( void ) {
    if (_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
    
}

void Bureaucrat::decrementGrade( void ) {
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

Bureaucrat::~Bureaucrat(){}






const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high !!!!"; 
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low !!!!"; 
}
