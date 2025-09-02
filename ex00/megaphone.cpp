/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:54:31 by jwuille           #+#    #+#             */
/*   Updated: 2025/08/30 18:54:33 by jwuille          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std::cout << (char)toupper(av[i][j]);
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
