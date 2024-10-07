/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:58:19 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/07 10:19:07 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string prompt_for_value(const std::string &name)
{
	std::string	value;

	while (value.empty())
	{
		std::cout << "Introduce " << name << ": ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ("");
		if (value.empty())
			std::cerr << "You must introduce a " << name << "!" << std::endl;
	}
	return (value);
}

static std::string prompt_for_x_name(const std::string &x)
{
	std::string	value;

	while (value.empty())
	{
		std::cout << "Introduce " << x << " name: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ("");
		if (value.empty())
			std::cerr << "You must introduce a " << x << " name!" << std::endl;
		for (int i = 0; value[i]; ++i)
		{
			unsigned char c = std::tolower(value[i]);
			if ((c < 'a' || c > 'z') && c != ' ')
			{
				std::cerr << "Invalid name, it must have only alphabetic letters" << std::endl;
				value = "";
				break ;
			}
		}
	}
	return (value);
}

static std::string	prompt_for_phone_number(void)
{
	std::string	value;

	while (value.empty())
	{
		std::cout << "Introduce phone number: ";
		std::getline(std::cin, value);
		if (std::cin.eof())
			return ("");
		if (value.empty())
			std::cout << "You must introduce a phone number!" << std::endl;
		for (int i = 0; value[i]; ++i)
		{
			if (value[i] < '0' || value[i] > '9')
			{
				std::cerr << "Invalid phone number, everything must be digits!" << std::endl;
				value = "";
				break ;
			}
		}
		if (value.length() > 15)
		{
			std::cerr << "Invalid phone number, it must have 15 digits max!" << std::endl;
			value = "";
		}
	}
	return (value);
}

static std::string	format_string(std::string str, const std::size_t max_width)
{
	if (str.length() > max_width)
		return (str.substr(0, max_width - 1) + '.');
	return (str.substr(0, max_width));
}

void PhoneBook::add_contact(void)
{
	if (_counter >= MAX_CAPACITY)
		std::cout << "You reached the max capacity (" << MAX_CAPACITY << "), replacing the oldest one..." << std::endl;
	std::string firstName = prompt_for_x_name("first");
	if (std::cin.eof())
		return ;
	std::string lastName = prompt_for_x_name("last");
	if (std::cin.eof())
		return ;
	std::string phoneNumber = prompt_for_phone_number();
	if (std::cin.eof())
		return ;
	std::string nickname = prompt_for_value("nickname");
	if (std::cin.eof())
		return ;
	std::string darkestSecret = prompt_for_value("darkest secret");
	if (std::cin.eof())
		return ;
	std::cout << "DEBUG " << _counter << std::endl;
	std::cout << "DEBUG " << (_counter % MAX_CAPACITY) << std::endl;
	_contact[_counter % MAX_CAPACITY].set_first_name(firstName);
	_contact[_counter % MAX_CAPACITY].set_last_name(lastName);
	_contact[_counter % MAX_CAPACITY].set_phone_number(phoneNumber);
	_contact[_counter % MAX_CAPACITY].set_nickname(nickname);
	_contact[_counter % MAX_CAPACITY].set_darkest_secret(darkestSecret);
	_counter++;
}

void	PhoneBook::_display_table(void)
{
	std::cout << "___________________________________________" << std::endl;
	std::cout << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << "First name";
	std::cout << "|";
	std::cout << std::setw(10) << "Last name";
	std::cout << "|";
	std::cout << std::setw(10) << "Nickname";
	std::cout << std::endl;
	int	maxIndex = _counter;
	if (maxIndex > MAX_CAPACITY) maxIndex = MAX_CAPACITY;
	for (int i = 0; i < maxIndex; ++i)
	{
		const std::size_t max_width = 10;
		std::cout << "___________________________________________" << std::endl;
		std::cout << std::setw(max_width) << i + 1;
		std::cout <<  "|";
		std::cout << std::setw(max_width) << format_string(_contact[i].get_first_name(), max_width);
		std::cout <<  "|";
		std::cout << std::setw(max_width) << format_string(_contact[i].get_last_name(), max_width);
		std::cout <<  "|";
		std::cout << std::setw(max_width) << format_string(_contact[i].get_nickname(), max_width);
		std::cout << std::endl;
	}
	std::cout << "___________________________________________" << std::endl;
}

void PhoneBook::search_contact(void)
{
	std::string	strIndex;
	int			index;

	_display_table();
	std::cout << "Introduce index: ";
	std::getline(std::cin, strIndex);
	if (std::cin.eof())
		return ;
	index = Utils::stoi(strIndex);
	if (!Utils::is_success())
	{
		std::cout << "Invalid number" << std::endl;
		return ;
	}
	if (index < 1 || index > MAX_CAPACITY + 1)
	{
		std::cerr << "Invalid index, it must be [1-" << MAX_CAPACITY << "]" << std::endl;
		return ;
	}
	int	maxIndex = _counter;
	if (maxIndex > MAX_CAPACITY) maxIndex = MAX_CAPACITY;
	if (index > maxIndex)
	{
		if (maxIndex == 1)
			std::cerr << "Invalid index, you have " << maxIndex << " contact!" << std::endl;
		else
			std::cerr << "Invalid index, you have " << maxIndex << " contacts!" << std::endl;
		return ;
	}
	--index;
	std::cout << "Index: " << index + 1 << std::endl;
	std::cout << "First name:" << _contact[index].get_first_name() << std::endl;
	std::cout << "Last name:" << _contact[index].get_last_name() << std::endl;
	std::cout << "Nickname:" << _contact[index].get_nickname() << std::endl;
}

PhoneBook::PhoneBook()
{
	_counter = 0;
}
