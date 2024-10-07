/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:08:24 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/10/07 09:57:42 by ribana-b         ###   ########.com      */
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
		PhoneBook();
		void	add_contact(void);
		void	search_contact(void);

	private:
		void	_display_table(void);
		bool	_is_full_capacity(void);
		Contact	_contact[MAX_CAPACITY];
		int		_counter;
};

#endif // PHONEBOOK_HPP
