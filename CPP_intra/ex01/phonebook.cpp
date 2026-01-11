/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:27:09 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 12:34:37 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::add()
{
    Contact new_contact;
    std::string input;

    std::cout << "Please enter first name" << std::endl;
    std::cin >> input;
    new_contact.first_name = input;
    std::cout << "Please enter last name" << std::endl;
	std::cin >> input;
    new_contact.last_name = input;
    std::cout << "Please enter nickname" << std::endl;
	std::cin >> input;
    new_contact.nickname = input;
    std::cout << "Please enter phone number" << std::endl;
	std::cin >> input;
    new_contact.phone_number = input;
    std::cout << "Please enter darkest secret" << std::endl;
	std::cin >> input;
    new_contact.darkest_secret = input;
    std::cout << "Contact successfully saved!" << std::endl;
    if(contact_amount == 8)
    {
        Contacts_book[oldest_contact] = new_contact;
        if(oldest_contact == 7)
            oldest_contact = 0;
        else
            oldest_contact++;
    }
    else
    {
        Contacts_book[contact_amount] = new_contact;
        contact_amount++;
    }
}

static void print_info(std::string str)
{
    size_t iter = 0;
    if(str.size() > 10)
    {
        while(iter < 9)
        {
            std::cout << str[iter];
            iter++;
        }
        std::cout << ".";
    }
    else
        std::cout << str;
    iter = 0;
    while(str.size() + iter < 10)
    {
        std::cout << " ";
        iter++;
    }
}

void PhoneBook::search()
{
   size_t iter = 0;

   while(iter < contact_amount)
   {
    std::cout << iter + 1 << " | ";
    print_info(Contacts_book[iter].first_name);
    std::cout << " | ";
    print_info(Contacts_book[iter].last_name);
    std::cout << " | ";
    print_info(Contacts_book[iter].nickname);
    std::cout << std::endl;
    iter++;
   }
}