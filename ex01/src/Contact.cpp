/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:10:10 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 18:02:26 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string	Contact::get_first_name(void)
{
	return (this->_field[FIRST_NAME]);
}

std::string	Contact::get_last_name(void)
{
	return (this->_field[LAST_NAME]);
}

std::string	Contact::get_nickname(void)
{
	return (this->_field[NICKNAME]);
}

void	Contact::set_first_name(std::string firstName)
{
	this->_field[FIRST_NAME] = firstName;
}

void	Contact::set_last_name(std::string lastName)
{
	this->_field[LAST_NAME] = lastName;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_field[NICKNAME] = nickname;
}

void	Contact::set_phone_number(std::string phoneNumber)
{
	this->_field[PHONE_NUMBER] = phoneNumber;
}

void	Contact::set_darkest_secret(std::string darkestSecret)
{
	this->_field[DARKEST_SECRET] = darkestSecret;
}
