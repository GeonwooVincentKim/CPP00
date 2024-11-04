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

char ft_cppToUpper(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c;
}

int main(int argc, char **argv)
{
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            std::string str = argv[i];
            for (std::string::iterator it = str.begin(); it != str.end(); it++) {
                std::cout << ft_cppToUpper(*it);
            }
        }
   
        // for (int i = 1; i < argc; i++) {
        //     for (int j = 0; argv[i][j] != '\0'; j++) {
        //         std::cout << ft_cppToUpper(argv[i][j]);
        //     }
        //     // Only add a space if it's not the last argument
        //     if (i < argc - 1) {
        //         std::cout << "";
        //     }
        // }
        std::cout << std::endl;
    }
    return 0;
}
