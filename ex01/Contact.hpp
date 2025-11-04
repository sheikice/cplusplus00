#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	data_setter(void);
		void	contact_previsu(int index);
		void	show_contact_info(void);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		void	_arg_setter(std::string request, std::string& arg);
		void	_field_previsu(int index);
		void	_field_previsu(std::string arg);
};

#endif
