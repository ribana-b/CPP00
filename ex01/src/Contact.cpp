/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:10:10 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 12:38:51 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name()
{
	return (this->field[FIRST_NAME]);
}

std::string Contact::get_last_name()
{
	return (this->field[LAST_NAME]);
}

std::string Contact::get_nickname()
{
	return (this->field[NICKNAME]);
}

void	Contact::set_first_name(std::string firstName)
{
	this->field[FIRST_NAME] = firstName;
}

void	Contact::set_last_name(std::string lastName)
{
	this->field[LAST_NAME] = lastName;
}

void	Contact::set_nickname(std::string nickname)
{
	this->field[NICKNAME] = nickname;
}

void	Contact::set_phone_number(std::string phoneNumber)
{
	this->field[PHONE_NUMBER] = phoneNumber;
}

void	Contact::set_darkest_secret(std::string darkestSecret)
{
	this->field[DARKEST_SECRET] = darkestSecret;
}
