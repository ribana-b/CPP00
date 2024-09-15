/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 06:08:17 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 18:02:03 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

/* @------------------------------------------------------------------------@ */
/* |                            Include Section                             | */
/* @------------------------------------------------------------------------@ */

# include <iostream>
# include <string.h>

/* @------------------------------------------------------------------------@ */
/* |                             Class Section                              | */
/* @------------------------------------------------------------------------@ */

class Contact
{
	public:
		enum e_field
		{
			FIRST_NAME,
			LAST_NAME,
			NICKNAME,
			PHONE_NUMBER,
			DARKEST_SECRET,
			MAX_FIELDS,
		};
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		void		set_first_name(std::string firstName);
		void		set_last_name(std::string lastName);
		void		set_nickname(std::string nickname);
		void		set_phone_number(std::string phoneNumber);
		void		set_darkest_secret(std::string darkestSecret);
	private:
		std::string	_field[MAX_FIELDS];
};

#endif // CONTACT_HPP
