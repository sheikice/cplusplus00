#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	dataSetter(void);
		void	contactPreview(int index);
		void	showContactInfo(void);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		void		_fieldSetter(std::string request, std::string& arg);
		void		_fieldPreview(int index);
		void		_fieldPreview(std::string arg);
};

#endif
