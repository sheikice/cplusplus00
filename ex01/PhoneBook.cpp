#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook(void) : _contactCount(0) { }

PhoneBook::~PhoneBook(void) { }

void	PhoneBook::_reorganiseContact(void)
{
	for(int i = 0; i + 1 < _MAX_CONTACTS; i++)
		_contacts[i] = _contacts[i + 1];
}

void	PhoneBook::add(void)
{
	Contact	new_contact;

	new_contact.setContactInfo();
	if (_contactCount == _MAX_CONTACTS)
	{
		_reorganiseContact();
		_contacts[_MAX_CONTACTS - 1] = new_contact;
	}
	else
	{
		_contacts[_contactCount] = new_contact;
		_contactCount++;
	}
}

void	PhoneBook::_previewPhoneBook(void)
{
	std::cout << "\n";
	std::cout << "--------------------------------------------\n";
	std::cout << "     index|first name|  lastname|  nickname|\n";
	std::cout << "----------|----------|----------|----------|\n";
	for(int i = 0; i < this->_contactCount; i++)
		(this->_contacts[i]).previewContact(i + 1);
	std::cout << "--------------------------------------------\n";
}

void	PhoneBook::search(void)
{
	int			choice = -1;
	std::string	line ("");

	if (_contactCount == 0)
	{
		std::cout << "No contact in the list yet." << std::endl;
		return ;
	}
	_previewPhoneBook();
	while (std::cin.good() && (choice <= 0 || choice > _contactCount))
	{
		std::cout << "\nCHOSE INDEX: ";
		getline(std::cin, line = "", '\n');
		if (!line.empty())
			std::stringstream(line) >> choice;
	}
	if (std::cin.good() && choice > 0)
		_contacts[choice - 1].showContactInfo();
}
