/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:16:09 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/21 00:09:37 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		for (int l1 = 1; l1 < argc; l1++)
		{
			for (int l2 = 0; argv[l1][l2]; l2++)
			{
				std::cout << char(toupper(argv[l1][l2]));
			}
			std::cout << " ";
		}
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::cout << std::endl;
}
