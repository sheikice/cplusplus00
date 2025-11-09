#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void) :
	_firstName(""), _lastName(""), _nickName(""), _phoneNumber(""),
	_darkestSecret("") { }

Contact::~Contact(void) { }

void	Contact::_setField(const std::string& request, std::string& arg)
{
	do {
		std::cout << request;
		getline(std::cin, arg, '\n');
	}
	while (std::cin.good() && arg.empty());
}

void	Contact::setContactInfo(void)
{
	_setField("\nfirst name: ", _firstName);
	_setField("last name: ", _lastName);
	_setField("nickname: ", _nickName);
	_setField("phone number: ", _phoneNumber);
	_setField("darkest secret: ", _darkestSecret);
}

void	Contact::_previewField(int index) const
{
	std::cout << std::setw(10) << index << "|";
}

void	Contact::_previewField(std::string arg) const
{
	if (arg.length() <= 10)
		std::cout << std::setw(10) << arg << "|";
	else
	{
		arg.resize(9);
		std::cout << std::setw(9) << arg << ".|";
	}
}

void	Contact::previewContact(int index) const
{
	_previewField(index);
	_previewField(_firstName);
	_previewField(_lastName);
	_previewField(_nickName);
	std::cout << std::endl;
}

void	Contact::showContactInfo(void) const
{
	std::cout << "\n" << "first name: " << _firstName << "\n"
		<< "last name: " << _lastName << "\n"
		<< "nickname: " << _nickName << "\n"
		<< "phone number: " << _phoneNumber << "\n"
		<< "darkest secret: " << _darkestSecret <<  std::endl;
}
