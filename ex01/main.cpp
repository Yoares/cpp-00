/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykhoussi <ykhoussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 21:37:28 by ykhoussi          #+#    #+#             */
/*   Updated: 2025/10/06 19:54:11 by ykhoussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int main() {
    PhoneBook phonebook;
    std::string command;

    while (true) {
        // Prompt user for command
        if (std::cin.eof()) break; // Handle Ctrl+D
        if (command == "ADD") phonebook.addContact();
        // else if (command == "SEARCH") phonebook.searchContact();
        else if (command == "EXIT") break;
        else std::cout << "Invalid command. Use ADD, SEARCH, or EXIT.\n";
    }
}