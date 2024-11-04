/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 22:57:47 by geonwkim          #+#    #+#             */
/*   Updated: 2024/09/21 23:48:51 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j] != '\0'; j++)
            {
                if (!std::isspace(argv[i][j]))
                {
                    std::cout << (char)std::toupper(argv[i][j]);
                }
            }
            // Only print a space if the next argument exists
            if (i < argc - 1)
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
