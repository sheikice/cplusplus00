#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# define MAX_CONTACT 8
class	PhoneBook
{
	private:
		int		_contact_number;
		void	_contact_reorganise(void);
		void	_previsualisation(void);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	contacts[MAX_CONTACT];
		void	add(void);
		void	search(void);
};

#endif
