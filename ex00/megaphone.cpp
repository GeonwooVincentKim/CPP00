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

#include	<iostream>
#include	<cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << (char)std::toupper(argv[i][j]);
				++j;
			}
			if (i < argc - 1)
				std::cout << " ";
			++i;
		}
		std::cout << std::endl;
	}
	return (0);
}

// int main(int argc, char **argv) {
//     if (argc == 1) {
//         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
//     } else {
//         // Loop through arguments starting at argv[1]
//         for (int i = 1; i < argc; ++i) {
//             // Loop through each character in the argument and convert to uppercase
//             for (int j = 0; argv[i][j] != '\0'; ++j) {
//                 std::cout << (char)std::toupper(argv[i][j]);
//             }
//             // Print a space after each argument, except the last one
//             if (i < argc - 1) {
//                 std::cout << " ";
//             }
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }
