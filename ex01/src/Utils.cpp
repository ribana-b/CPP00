/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:04:48 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2024/09/14 09:54:21 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	Utils::isSuccess = true;

bool	Utils::is_success()
{
	return (isSuccess);
}

int	Utils::stoi(std::string str)
{
	int	num;

	isSuccess = true;
	std::stringstream ssInt(str);
	ssInt >> num;
	if (ssInt.fail())
	{
		isSuccess = false;
		return (1);
	}
	return (num);
}
