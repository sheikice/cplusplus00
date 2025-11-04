#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"


class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);

	private:
		static const int	_MAX_CONTACTS = 8;
		Contact				_contacts[_MAX_CONTACTS];
		int					_contactCount;
		void				_contactReorganise(void);
		void				_contactPreview(void);
		void				_phoneBookPreview(void);

};

#endif
