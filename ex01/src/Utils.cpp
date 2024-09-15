/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:04:48 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 18:07:34 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	Utils::_isSuccess = true;

bool	Utils::is_success(void)
{
	return (_isSuccess);
}

int	Utils::stoi(std::string str)
{
	int	num;

	_isSuccess = true;
	std::stringstream ssInt(str);
	ssInt >> num;
	if (ssInt.fail())
	{
		_isSuccess = false;
		return (1);
	}
	return (num);
}
