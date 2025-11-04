#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <string>


PhoneBook::PhoneBook(void) : _contactCount(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::_contactReorganise(void)
{
	for(int i = 0; i + 1 < _MAX_CONTACTS; i++)
		this->_contacts[i] = this->_contacts[i + 1];
	return ;
}

void	PhoneBook::add(void)
{
	Contact	new_contact;

	new_contact.dataSetter();
	if (_contactCount == _MAX_CONTACTS)
	{
		_contactReorganise();
		this->_contacts[_MAX_CONTACTS - 1] = new_contact;
	}
	else
	{
		this->_contacts[this->_contactCount] = new_contact;
		this->_contactCount++;
	}
	return ;
}

void	PhoneBook::_phoneBookPreview(void)
{
	std::cout << "\n";
	std::cout << "--------------------------------------------\n";
	std::cout << "     index|first name|  lastname|  nickname|\n";
	std::cout << "----------|----------|----------|----------|\n";
	for(int i = 0; i < this->_contactCount; i++)
		(this->_contacts[i]).contactPreview(i + 1);
	std::cout << "--------------------------------------------\n";
	return ;
}

void	PhoneBook::search(void)
{
	int		choice = -1;
	std::string	line ("");

	_phoneBookPreview();
	while (std::cin && (choice <= 0 || choice > this->_contactCount))
	{
		std::cout << "\nCHOSE INDEX: ";
		getline(std::cin, line = "", '\n');
		if (line != "")
			std::stringstream(line) >> choice;
	}
	if (choice > 0)
		this->_contacts[choice - 1].showContactInfo();
	return ;
}
