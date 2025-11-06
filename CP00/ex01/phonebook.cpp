#include <iostream>
#include <stdio.h>
#include <string.h>

class Phonebook
{
private:
	string first_name;
	string last_name;
	string nickname;
	string phone_number;
	string darkest_secret;

public:
	
};

int	main(void)
{
	char str[1];

	while (1)
	{
		std::cout << "Please use one of the following commands:" << std::endl << "1. ADD: save a new contact" << std::endl << "2. SEARCH: display a specific contact" << std::endl << "3. EXIT: exit the phonebook" << std::endl;
		std::cin >> str;
		if (strcmp(str, "ADD") == 0)
		{
			std::cout << "Exiting the program !" << std::endl;
			return (1);
		}
		if (strcmp(str, "SEARCH") == 0)
		{
			std::cout << "Exiting the program !" << std::endl;
			return (1);
		}
		if (strcmp(str, "EXIT") == 0)
		{
			std::cout << "Exiting the program !" << std::endl;
			return (1);
		}
	}
}