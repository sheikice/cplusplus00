#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook		phoneBook;
	std::string		line;

	while (std::cin.good() && line != "EXIT")
	{
		std::cout << "\nADD, SEARCH or EXIT: ";
		getline(std::cin, line = "", '\n');
		if (line == "ADD")
			phoneBook.add();
		if (line == "SEARCH")
			phoneBook.search();
	}
	std::cout << std::endl;
	return (0);
}
