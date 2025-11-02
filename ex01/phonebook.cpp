/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 22:16:31 by eazmir            #+#    #+#             */
/*   Updated: 2025/09/17 22:16:34 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook():size(0)
{
}
Phonebook::~Phonebook()
{
}
void Phonebook::add()
{
    if (stack[size % 8].set_info())
        size++;
}

std::string ft_formate_field(std::string &str)
{
    std::ostringstream oss;
    if (str.length() > 10)
        oss << std::setw(10) << str.substr(0,9) + '.';
    else
        oss  << std::setw(10) << str;
    return (oss.str());
}

std::string Contact::get_contact(int index)
{
    std::ostringstream oss;

    oss <<std::setw(9) 
        <<index<<GREEN<< "|"<<RESET
        <<ft_formate_field(first_name)<<GREEN<<"|"<<RESET
        <<ft_formate_field(last_name)<<GREEN<< "|"<<RESET
        <<ft_formate_field(nck_name)<<GREEN<<"|"<<RESET
        <<std::endl;
    return (oss.str());
}

void table(int row,int col)
{

   std::string grid[4] = {
    "index",
    "First name",
    "Last name",
    "Nickname",
    };

    for (int i = 0; i < row;i++)
    {
        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < col;j++)
            {
                if (j == 0)
                    std::cout <<GREEN<< "+"<<RESET;
                else if (j == col - 1)
                    std::cout <<GREEN<< "+" <<RESET<<std::endl;
                else
                    std::cout <<GREEN<< "-"<<RESET;
            }
        }
        else
        {
            for (int c = 0 ; c < 5;c++)
            {
                if (c == 0)
                    std::cout <<"|"<< ft_formate_field(grid[c]) <<GREEN<< "|"<<RESET;
                else if (c < 3)
                    std::cout <<ft_formate_field (grid[c])<<GREEN<<"|"<<RESET;
                else if (c == 3)
                     std::cout <<ft_formate_field(grid[c])<<GREEN<<"|"<<RESET<<std::endl;
            }
        }
    }
}

void Phonebook::search()
{
    int index;
    std::string line;
    int max_size;
    
    table(3,45);
    if (size >= 8)
        max_size = 8;
    else
        max_size = size;
    for (int i = 0; i < max_size;i++)
    { 
            std::cout <<GREEN<< "| "<<RESET;
            std::cout <<stack[i].get_contact(i)<<RESET;
            std::cout <<GREEN<< "+"<<RESET;
            std::string space(43,'-');
            std::cout <<GREEN<< space<<"+"<<RESET<<std::endl;
    }
    std::cout <<COLOR_BLACK<< "Enter index: "<<RESET;
    std::cin >> index;
    if (std::cin.fail())
    {   
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout <<RED<< "Invalid input!" << RESET<<std::endl;
        return;
    }
    std::cin.ignore();
    if (index < 0 || index >= size || index == 8)
        std::cout <<RED<<"invalid index!"<<RESET<<std::endl;
    else
    {
            std::cout<<"First name: "<<stack[index].get_first_name()<<std::endl;
            std::cout<<"Last name : "<<stack[index].get_last_name()<<std::endl;
            std::cout<<"Nickname : "<<stack[index].get_nick_name()<<std::endl;
            std::cout<<"Dark Secret: "<<stack[index].get_dark_secret()<<std::endl;
            std::cout<<"phone number: "<<stack[index].get_phone_number()<<std::endl;
    }
}