#include "Contact.hpp"

Contact::Contact(void)
{
	this->first_name = EMPTY;
	this->last_name = EMPTY;
	this->nickname = EMPTY;
	this->phone_number = EMPTY;
	this->darkest_secret = EMPTY;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::arg_setter(std::string request, std::string& arg)
{
	while (std::cin && arg == EMPTY)
	{
		std::cout << request;
		getline(std::cin, arg, '\n');
	}
}

void	Contact::data_setter(void)
{
	arg_setter(FIRST_NAME, this->first_name);
	arg_setter(LAST_NAME, this->last_name);
	arg_setter(NICKNAME, this->nickname);
	arg_setter(PHONE_NUMBER, this->phone_number);
	arg_setter(DARKEST_SECRET, this->darkest_secret);
}

void	Contact::field_previsu(int index)
{
	std::cout << std::setw(10) << index << "|";
}

void	Contact::field_previsu(std::string arg)
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
	field_previsu(index);
	field_previsu(first_name);
	field_previsu(last_name);
	field_previsu(nickname);
	std::cout << std::endl;
	return ;
}

void	Contact::show_contact_info(void)
{
	std::cout << "\n" << FIRST_NAME << this->first_name << "\n";
	std::cout << LAST_NAME << this->last_name << "\n";
	std::cout << NICKNAME << this->nickname << "\n";
	std::cout << PHONE_NUMBER << this->phone_number << "\n";
	std::cout << DARKEST_SECRET << this->darkest_secret << std::endl;
}
