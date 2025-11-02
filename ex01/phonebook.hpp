/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:01:31 by eazmir            #+#    #+#             */
/*   Updated: 2025/09/15 11:01:42 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
    private:
        Contact stack[8];
         int size;
    public:
        Phonebook(void);
        ~Phonebook();
        void add();
        void search();
};

#endif