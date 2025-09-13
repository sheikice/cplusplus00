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

void	Contact::arg_setter(string request, string& arg)
{
	while (cin && arg == EMPTY)
	{
		cout << request;
		getline(cin, arg, '\n');
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
	cout << setw(10) << index << "|";
}

void	Contact::field_previsu(string arg)
{
	if (arg.length() <= 10)
		cout << setw(10) << arg << "|";
	else
	{
		arg.resize(9);
		cout << setw(9) << arg << ".|";
	}
}

void	Contact::contact_previsu(int index)
{
	field_previsu(index);
	field_previsu(first_name);
	field_previsu(last_name);
	field_previsu(nickname);
	cout << endl;
	return ;
}

void	Contact::show_contact_info(void)
{
	cout << "\n" << FIRST_NAME << this->first_name << "\n";
	cout << LAST_NAME << this->last_name << "\n";
	cout << NICKNAME << this->nickname << "\n";
	cout << PHONE_NUMBER << this->phone_number << "\n";
	cout << DARKEST_SECRET << this->darkest_secret << endl;
}
