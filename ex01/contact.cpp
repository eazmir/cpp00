/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:38:55 by eazmir            #+#    #+#             */
/*   Updated: 2025/09/16 16:25:24 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{}
Contact::~Contact()
{}
std::string Contact::get_first_name()
{
    return (first_name);
}
std::string Contact::get_last_name()
{
    return (last_name);
}
std::string Contact::get_nick_name()
{
    return (nck_name);
}
std::string Contact::get_dark_secret()
{
    return (secret);
}
std::string Contact::get_phone_number()
{
    return (phonenumber);
}

void ft_read_line(std::string &line)
{
    std::getline(std::cin,line);
    if (std::cin.eof())
        exit(0);
}

int Contact::set_info()
{
    std::cout <<COLOR_BLACK<< "Enter your first name : ";
    ft_read_line(first_name);
    if (first_name.empty())
    {
        std::cout<<RED<<"Error: first name cannot be empty !"<<RESET<<std::endl;
        return (0);
    }
    std::cout << "Enter your last name : ";
    ft_read_line(last_name);
    if (last_name.empty())
    {
        std::cout<<RED<<"Error: last name cannot be empty !"<<RESET<<std::endl;
        return(0);
    }
    std::cout << "Enter your nickname : ";
    ft_read_line(nck_name);
    if (nck_name.empty())
    {
        std::cout<<RED<<"Error: nick name cannot be empty !"<<RESET<<std::endl;
        return (0);
    }
    std::cout << "Enter your darkes secret: ";
    ft_read_line(secret);
    if (secret.empty())
    {
        std::cout<<RED<<"Error: dark secret cannot be empty !"<<RESET<<std::endl;
        return (0);
    }
    std::cout << "Enter your phone number: "<<RESET;
    ft_read_line(phonenumber);
    if (phonenumber.empty())
    {
        std::cout<<RED<<"Error: phone number cannot be empty !"<<RESET<<std::endl;
        return (0);
    }
    return (1);
}
