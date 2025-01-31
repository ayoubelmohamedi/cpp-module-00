/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-moha <ael-moha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 15:07:46 by ael-moha          #+#    #+#             */
/*   Updated: 2025/01/31 15:07:47 by ael-moha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

int main(void)
{
    std::string input;
    Phonebook phonebook;

    while (input != "EXIT")
    {
        std::cout << "Choose operation (ADD, SEARCH, EXIT):";
        if (!std::getline(std::cin, input))
        {
            std::cerr << "Error reading input. Exiting..." << std::endl;
            break;
        }
        if (input == "ADD")
            phonebook.add_user();
        else if (input ==  "SEARCH")
            phonebook.search(); 
        else if (input != "EXIT")
            std::cout << "Invalid command. Please try again." << std::endl;
    } 
    return (0);
}

