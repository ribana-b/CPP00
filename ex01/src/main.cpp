/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:41:20 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 18:06:40 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	option;

	std::cout << "Welcome to the PhoneBook\n";
	while (option.compare("EXIT") != 0)
	{
		std::cout << "PhoneBook> ";
		std::getline(std::cin, option);
		if (std::cin.eof())
		{
			std::cerr << "\nClosing PhoneBook..." << std::endl;
			return (1);
		}
		if (option.compare("ADD") == 0)
			phoneBook.add_contact();
		else if (option.compare("SEARCH") == 0)
			phoneBook.search_contact();
		else if (option.compare("EXIT") != 0)
			std::cerr << "Invalid command, try [ADD, EXIT, SEARCH]" << std::endl;
		else if (option.empty())
			std::cout << "You should try a command [ADD, EXIT, SEARCH]" << std::endl;
		if (std::cin.eof())
		{
			std::cerr << "\nClosing PhoneBook..." << std::endl;
			return (1);
		}
	}
	std::cout << "Exitting PhoneBook" << std::endl;
	return (0);
}
