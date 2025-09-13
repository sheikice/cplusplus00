#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>
using namespace std;

# define FIRST_NAME "first name: "
# define LAST_NAME "last name: "
# define NICKNAME "nickname: "
# define PHONE_NUMBER "phone number: "
# define DARKEST_SECRET "darkest secret: "

class	Contact
{
	private:
		string	first_name;
		string	last_name;
		string	nickname;
		string	phone_number;
		string	darkest_secret;
		void	arg_setter(string request, string& arg);
		void	field_previsu(int index);
		void	field_previsu(string arg);

	public:
		Contact(void);
		~Contact(void);
		void	data_setter(void);
		void	contact_previsu(int index);
		void	show_contact_info(void);
};

#endif
