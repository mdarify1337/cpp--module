/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:25:04 by mdarify           #+#    #+#             */
/*   Updated: 2023/02/15 15:27:39 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string data)
{
	firstName = data;
}

std::string Contact::getFirstName () const
{
	return (firstName);
}

void Contact::setLastName(std::string data)
{
	lastName = data;
}

std::string Contact::getLastName () const
{
	return (lastName);
}

void Contact::setNickName(std::string data)
{
	nickName = data;
}

std::string Contact::getNickName () const
{
	return (nickName);
}

void Contact::setPhoneNumber(std::string data)
{
	phoneNumber = data;
}

std::string Contact::getPhoneNumber () const
{
	return (phoneNumber);
}

void Contact::setDarkestSecret(std::string data)
{
	darkestSecret = data;
}

std::string Contact::getDarkestSecret () const
{
	return (darkestSecret);
}