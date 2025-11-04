#include "Contact.hpp"
#include <iomanip>
#include <iostream>

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::_arg_setter(std::string request, std::string& arg)
{
	while (std::cin && arg == "")
	{
		std::cout << request;
		getline(std::cin, arg, '\n');
	}
}

void	Contact::data_setter(void)
{
	_arg_setter("first name: ", this->_first_name);
	_arg_setter("last name: ", this->_last_name);
	_arg_setter("nickname: ", this->_nickname);
	_arg_setter("phone number: ", this->_phone_number);
	_arg_setter("darkest secret: ", this->_darkest_secret);
}

void	Contact::_field_previsu(int index)
{
	std::cout << std::setw(10) << index << "|";
}

void	Contact::_field_previsu(std::string arg)
{
	if (arg.length() <= 10)
		std::cout << std::setw(10) << arg << "|";
	else
	{
		arg.resize(9);
		std::cout << std::setw(9) << arg << ".|";
	}
}

void	Contact::contact_previsu(int index)
{
	_field_previsu(index);
	_field_previsu(_first_name);
	_field_previsu(_last_name);
	_field_previsu(_nickname);
	std::cout << std::endl;
	return ;
}

void	Contact::show_contact_info(void)
{
	std::cout << "\n" << "first name: " << this->_first_name << "\n";
	std::cout << "last name: " << this->_last_name << "\n";
	std::cout << "nickname: " << this->_nickname << "\n";
	std::cout << "phone number: " << this->_phone_number << "\n";
	std::cout << "darkest secret: " << this->_darkest_secret << std::endl;
}
