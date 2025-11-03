#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	repo;
	std::string		line;
	while(std::cin && line != EXIT)
	{
		std::cout << FIRST_REQUEST;
		getline(std::cin, line = EMPTY, NEW_LINE);
		if (line == ADD)
			repo.add();
		if (line == SEARCH)
			repo.search();
	}
	std::cout << std::endl;
	return (0);
}
