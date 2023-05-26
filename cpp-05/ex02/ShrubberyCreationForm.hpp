/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:28:32 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/17 15:49:37 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
		void executeAction() const;
        virtual ~ShrubberyCreationForm();
};


#endif