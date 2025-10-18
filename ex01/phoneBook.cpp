/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ares <ares@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:37:28 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/10/18 15:16:42 by ares             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

PhoneBook::PhoneBook() : contactCount(0), nextIndex(0) {}

void PhoneBook::addContact(){
    Contact newContact;
    std::string input;

    std::cout << "Enter the first name: ";
    std::getline(std::cin, input);
    newContact.setfirstname(input);

    std::cout << "Enter the last name: ";
    std::getline(std::cin, input);
    newContact.setlastname(input);
    
    std::cout << "Enter the nick name: ";
    std::getline(std::cin, input);
    newContact.setnickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setphonenum(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setdarkestsecret(input);

    contacts[nextIndex] = newContact;
    nextIndex = (nextIndex + 1) % 8;
    
    if (contactCount  < 8)
        contactCount++;
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact(){
    if (contactCount == 0){
        std::cout << "Phonbook is empty" << std::endl;
        return;   
    }
    
    displayContactTable();

    int index = getValidIndex();
    if (index >= 0 && index < contactCount){
            std::cout << "\nFirst Name: " << contacts[index].getfirstname() << std::endl;
            std::cout << "Last Name: " << contacts[index].getlastname() << std::endl;
            std::cout << "Nickname: " << contacts[index].getnickname() << std::endl;
            std::cout << "Phone Number: " << contacts[index].getphonenum() << std::endl;
            std::cout << "Darkest Secret: " << contacts[index].getdarkestsecret() << std::endl;
    }
    
}

// Helper methods (optional)

void PhoneBook::displayContactTable(){
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(44, '-') << std::endl;
    
    for (int i = 0; i < contactCount; i++) {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getfirstname()) << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getlastname()) << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getnickname()) << std::endl;
    }
}

int PhoneBook::getValidIndex(){
    std::string input;
    int index;
    
    std::cout << "Enter index: ";
    std::getline(std::cin, input);
    
    std::stringstream ss(input);
    if (!(ss >> index) || index < 0 || index >= contactCount) {
        std::cout << "Invalid index!" << std::endl;
        return -1;
    }
    
    return index;
}

std::string PhoneBook::truncateString(const std::string& str) {
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}
