/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:23:03 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 15:48:55 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
        PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
		void executeAction() const;
        virtual ~PresidentialPardonForm();
};


#endif
