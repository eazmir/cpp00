/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eazmir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:08:28 by eazmir            #+#    #+#             */
/*   Updated: 2025/07/25 10:09:07 by eazmir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

int main (int argc ,char **argv)
{
    int i;
    int j;

    i =  1;
    if (argc > i)
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j])
            {
                char c = argv[i][j];
                if (std::islower(c))
                {
                    std::cout <<(char)std::toupper(c);
                }
                else
                    std::cout << c;
                j++;
            }
            i++;
        }
    }
    else
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    return (0);
}