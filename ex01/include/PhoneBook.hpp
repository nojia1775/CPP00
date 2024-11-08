#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class   PhoneBook
{
        private:
                Contact         contacts[8];
                int             nbr_contact;
                int             first;

        public:
                		PhoneBook();
                		~PhoneBook();
                void    	new_contact(std::string fname, std::string lname, std::string nname, std::string num, std::string secret);
                void    	all_contacts(void) const;
                void    	get_info(int index) const;
};

#endif
