/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:54:31 by jwuille           #+#    #+#             */
/*   Updated: 2025/11/21 17:37:36 by jwuille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string	capitalize(std::string str)
{
	for (std::string::iterator it = str.begin(); it != str.end(); it++)
		*it = (char)std::toupper(*it);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
			std::cout << capitalize(av[i]);
	std::cout << std::endl;
	return (0);
}
