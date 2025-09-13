#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	repo;
	string		line;
	while(cin && line != EXIT)
	{
		cout << FIRST_REQUEST;
		getline(cin, line = EMPTY, NEW_LINE);
		if (line == ADD)
			repo.add();
		if (line == SEARCH)
			repo.search();
	}
	cout << endl;
	return (0);
}
