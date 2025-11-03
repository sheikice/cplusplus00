#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include "Contact.hpp"

# define MAX_CONTACT 8
# define CONTACT_SELECT_REQUEST "\nCHOSE INDEX: ";
# define FIRST_REQUEST "\nADD, SEARCH or EXIT: "
# define EMPTY ""
# define NEW_LINE '\n'
# define EXIT "EXIT"
# define SEARCH "SEARCH"
# define ADD "ADD"

class	PhoneBook
{
	private:
		int		contact_number;
		void	contact_reorganise(void);
		void	previsualisation(void);

	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact	contacts[MAX_CONTACT];
		void	add(void);
		void	search(void);
};

#endif
