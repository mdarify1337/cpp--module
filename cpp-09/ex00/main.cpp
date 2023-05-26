/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:30:16 by mdarify           #+#    #+#             */
/*   Updated: 2023/04/18 00:34:33 by mdarify          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "BitcoinExchange.hpp"

void errorPrinting(const char *message) {
    std::cout << message << std::endl;
    exit (1);
}

int main(int ac, char **av)
{
    if (ac > 2)
        errorPrinting(INVALID_ARGUMENTS);
    try{
        BitcoinExchange bitcoin(av[1]);
        bitcoin.prepareForExchanging();
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}