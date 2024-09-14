/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:08:24 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 13:27:52 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Define Section                              | */
/* @------------------------------------------------------------------------@ */

# define MAX_CAPACITY 8

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"
# include "Utils.hpp"

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class PhoneBook
{
	public:
		void	add_contact();
		void	search_contact();
	private:
		void	display_table();
		bool	is_full_capacity();
		Contact	contact[MAX_CAPACITY];
		int		counter;
};

#endif // PHONEBOOK_HPP
