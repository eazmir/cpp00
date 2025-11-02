/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:02:59 by eazmir            #+#    #+#             */
/*   Updated: 2025/09/16 16:29:20 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdlib>

#define RESET       "\033[0m"
#define COLOR_WHITE "\033[1;37m"
#define COLOR_BLACK "\033[0;30m"
#define GREEN "\033[32m"
#define RED   "\033[1;31m"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nck_name;
        std::string secret;
        std::string phonenumber;
    public:
        Contact(void);
        ~Contact();
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nick_name();
        std::string get_dark_secret();
        std::string get_phone_number();
        std::string get_contact(int index);
        int set_info();
};
#endif