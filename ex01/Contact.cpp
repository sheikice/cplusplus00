#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void) :
	_firstName(""), _lastName(""), _nickName(""),
	_phoneNumber(""), _darkestSecret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::_fieldSetter(std::string request, std::string& arg)
{
	while (std::cin && arg == "")
	{
		std::cout << request;
		getline(std::cin, arg, '\n');
	}
}

void	Contact::dataSetter(void)
{
	_fieldSetter("first name: ", this->_firstName);
	_fieldSetter("last name: ", this->_lastName);
	_fieldSetter("nickname: ", this->_nickName);
	_fieldSetter("phone number: ", this->_phoneNumber);
	_fieldSetter("darkest secret: ", this->_darkestSecret);
}

void	Contact::_fieldPreview(int index)
{
	std::cout << std::setw(10) << index << "|";
}

void	Contact::_fieldPreview(std::string arg)
{
	if (arg.length() <= 10)
		std::cout << std::setw(10) << arg << "|";
	else
	{
		arg.resize(9);
		std::cout << std::setw(9) << arg << ".|";
	}
}

void	Contact::contactPreview(int index)
{
	_fieldPreview(index);
	_fieldPreview(_firstName);
	_fieldPreview(_lastName);
	_fieldPreview(_nickName);
	std::cout << std::endl;
	return ;
}

void	Contact::showContactInfo(void)
{
	std::cout << "\n" << "first name: " << this->_firstName << "\n";
	std::cout << "last name: " << this->_lastName << "\n";
	std::cout << "nickname: " << this->_nickName << "\n";
	std::cout << "phone number: " << this->_phoneNumber << "\n";
	std::cout << "darkest secret: " << this->_darkestSecret << std::endl;
}
