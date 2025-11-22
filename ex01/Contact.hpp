#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class	Contact
{
	public:
		Contact(void);
		~Contact(void);

		void	setContactInfo(void);
		void	previewContact(int index) const;
		void	showContactInfo(void) const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		bool		_setField(const std::string& request, std::string& arg);
		void		_previewField(int index) const;
		void		_previewField(std::string arg) const;
};

#endif
