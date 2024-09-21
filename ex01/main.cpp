/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:52:46 by geonwkim          #+#    #+#             */
/*   Updated: 2024/09/21 23:52:48 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD") {
            Contact newContact;
            std::string input;

            std::cout << "Enter first name: ";
            std::getline(std::cin, input);
            newContact.setFirstName(input);

            std::cout << "Enter last name: ";
            std::getline(std::cin, input);
            newContact.setLastName(input);

            std::cout << "Enter nickname: ";
            std::getline(std::cin, input);
            newContact.setNickname(input);

            std::cout << "Enter phone number: ";
            std::getline(std::cin, input);
            newContact.setPhoneNumber(input);

            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, input);
            newContact.setDarkestSecret(input);

            phoneBook.addContact(newContact);
        } 
        else if (command == "SEARCH") {
            phoneBook.displayContacts();

            std::cout << "Enter the index of the contact to display: ";
            int index;
            std::cin >> index;
            std::cin.ignore(); // Ignore the newline after entering the number

            phoneBook.displayContactDetails(index - 1); // Adjusting index for 0-based array
        } 
        else if (command == "EXIT") {
            break;
        } 
        else {
            std::cout << "Unknown command." << std::endl;
        }
    }

    return 0;
}
