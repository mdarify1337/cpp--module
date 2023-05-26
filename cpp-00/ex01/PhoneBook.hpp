/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:56:01 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/19 15:55:51 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"


#define MAX_SIZE 8
class PhoneBook
{
    private:
        Contact contacts[MAX_SIZE];
	public:
        void    addContact(const Contact &contact, int &index);
        Contact getContactByIndex(const int &contactIndex, std::string &enteredIndex);
        int     isValidIndex(std::string enteredIndex, const int &contactIndex);
        bool    SearchForChar(const std::string &enteredIndex);
        void    editAndPrintData(const Contact &contact, int &contact_index);
        void    editingData(std::string &printed_data);
        void    checkAndSearch(int &contactIndex);
        void    printingByIndex(Contact const &contact);
};
#endif
