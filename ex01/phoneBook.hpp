/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:38:12 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/10/06 17:11:01 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


// Each Contact is an OBJECT with its own data
class Contact {
private:  // Internal data - hidden
    std::string firstName;
    std::string lastName;
    std::string phoneNumber;

public:   // Interface - what you can DO with a contact
    void setFirstName(std::string name);
    std::string getFirstName();
    void displayContact();
};

// PhoneBook manages multiple Contact objects
class PhoneBook {
private:
    Contact contacts[8];  // Array of Contact objects
    int contactCount;
    
public:
    void addContact();
    void searchContacts();
};
