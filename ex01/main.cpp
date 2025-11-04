#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook		repo;
	std::string		line;

	while (std::cin && line != "EXIT")
	{
		std::cout << "ADD, SEARCH or EXIT: ";
		getline(std::cin, line = "", '\n');
		if (line == "ADD")
			repo.add();
		if (line == "SEARCH")
			repo.search();
	}
	std::cout << std::endl;
	return (0);
}
