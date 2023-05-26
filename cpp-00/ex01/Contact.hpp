/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:25:14 by mdarify           #+#    #+#             */
/*   Updated: 2023/02/15 16:23:36 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickName() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
    void setFirstName(std::string data);
    void setLastName(std::string data);
    void setNickName(std::string data);
    void setPhoneNumber(std::string data);
    void setDarkestSecret(std::string data);

};

#endif