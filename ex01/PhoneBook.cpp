#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->contact_number = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::contact_reorganise(void)
{
	for(int i = 0; i + 1 < MAX_CONTACT; i++)
		this->contacts[i] = this->contacts[i + 1];
	return ;
}

void	PhoneBook::add(void)
{
	Contact	new_contact;

	new_contact.data_setter();
	if (contact_number == MAX_CONTACT)
	{
		contact_reorganise();
		this->contacts[MAX_CONTACT - 1] = new_contact;
	}
	else
	{
		this->contacts[this->contact_number] = new_contact;
		this->contact_number++;
	}
	return ;
}

void	PhoneBook::previsualisation(void)
{
	std::cout << "\n";
	std::cout << "--------------------------------------------\n";
	std::cout << "     index|first name|  lastname|  nickname|\n";
	std::cout << "----------|----------|----------|----------|\n";
	for(int i = 0; i < this->contact_number; i++)
		(this->contacts[i]).contact_previsu(i + 1);
	std::cout << "--------------------------------------------\n";
	return ;
}

void	PhoneBook::search(void)
{
	int		choice = -1;
	std::string	line ("");

	previsualisation();
	while (std::cin && (choice <= 0 || choice > this->contact_number))
	{
		std::cout << CONTACT_SELECT_REQUEST;
		getline(std::cin, line = "", '\n');
		if (line != "")
			std::stringstream(line) >> choice;
	}
	if (choice > 0)
		this->contacts[choice - 1].show_contact_info();
	return ;
}
