/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:52:03 by geonwkim          #+#    #+#             */
/*   Updated: 2024/09/21 23:52:05 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
    Contact contacts[8];
    int contactCount; // Keeps track of total contacts added
    int nextIndex;    // Index to replace next contact if full

public:
    PhoneBook();

    void addContact(const Contact &contact);
    void displayContacts() const;
    void displayContactDetails(int index) const;
};

#endif
