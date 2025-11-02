/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 16:21:42 by eazmir            #+#    #+#             */
/*   Updated: 2025/09/16 16:24:16 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	Phonebook phonebook;
	std::string input;

	while (1)
	{
		std::cout <<COLOR_WHITE<<"Enter your command (ADD,SEARCH,EXIT): "<<RESET;
		std::getline(std::cin,input);
		if (std::cin.eof())
			return (0);
		if (input == "ADD")
			phonebook.add();
		if (input == "SEARCH")
			phonebook.search();
		if (input == "EXIT")
			return (0);
	}
	return (0);
}
