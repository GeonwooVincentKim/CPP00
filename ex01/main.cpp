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
#include <limits>
#include <cctype>

bool getInput(const std::string &prompt, std::string &input) {
    std::cout << prompt;
    if (!std::getline(std::cin, input) || input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
        return false;
    }
    return true;
}

bool isValidPhoneNumber(const std::string &phoneNumber) {
    for (std::string::size_type i = 0; i < phoneNumber.length(); ++i) {
        if (!std::isdigit(phoneNumber[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command)) {
            std::cout << "Error reading input." << std::endl;
            break;
        }

        if (command == "ADD") {
            Contact newContact;
            std::string input;

            if (!getInput("Enter first name: ", input)) continue;
            newContact.setFirstName(input);

            if (!getInput("Enter last name: ", input)) continue;
            newContact.setLastName(input);

            if (!getInput("Enter nickname: ", input)) continue;
            newContact.setNickname(input);

            do {
                if (!getInput("Enter phone number: ", input)) continue;
                if (!isValidPhoneNumber(input)) {
                    std::cout << "Error: Phone number must contain only digits." << std::endl;
                } else {
                    break;
                }
            } while (true);
            newContact.setPhoneNumber(input);

            if (!getInput("Enter darkest secret: ", input)) continue;
            newContact.setDarkestSecret(input);

            phoneBook.addContact(newContact);
        } 
        else if (command == "SEARCH") {
            phoneBook.displayContacts();

            std::cout << "Enter the index of the contact to display: ";
            int index;
            if (!(std::cin >> index)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid index." << std::endl;
                continue;
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            phoneBook.displayContactDetails(index - 1);
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
