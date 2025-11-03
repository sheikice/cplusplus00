#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <iomanip>

# define EMPTY ""
# define FIRST_NAME "first name: "
# define LAST_NAME "last name: "
# define NICKNAME "nickname: "
# define PHONE_NUMBER "phone number: "
# define DARKEST_SECRET "darkest secret: "

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		void	arg_setter(std::string request, std::string& arg);
		void	field_previsu(int index);
		void	field_previsu(std::string arg);

	public:
		Contact(void);
		~Contact(void);
		void	data_setter(void);
		void	contact_previsu(int index);
		void	show_contact_info(void);
};

#endif
