#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
        std::cout << "create PhoneBook" << std::endl;
        this->nbr_contact = 0;
        first = 0;
        return ;
}

PhoneBook::~PhoneBook(void)
{
        std::cout << "delete PhoneBook" << std::endl;
        return ;
}

void    PhoneBook::new_contact(std::string fname, std::string lname, std::string nname, std::string num, std::string secret)
{
        Contact contact;
        
        if (nbr_contact < 8)
        {
                contact.create(fname, lname, nname, num, secret);
                this->contacts[nbr_contact++] = contact;
        }
        else
        {
                contact.create(fname, lname, nname, num, secret);
                this->contacts[first] = contact;
                this->first = (++this->first) % 8; 
        }
}

static int      find_index(std::string str)
{
        if (!str.compare("0"))
                return (0);
        else if (!str.compare("1"))
                return (1);
        else if (!str.compare("2"))
                return (2);
        else if (!str.compare("3"))
                return (3);
        else if (!str.compare("4"))
                return (4);
        else if (!str.compare("5"))
                return (5);
        else if (!str.compare("6"))
                return (6);
        else if (!str.compare("7"))
                return (7);
        else if (!str.compare("8"))
                return (8);
        else
                return (-1);
}
void    PhoneBook::all_contacts(void) const
{
        int             i;
        std::string     index;

        i = 0;
        while (i < nbr_contact)
        {
                this->contacts[i].get_info(i);
                i++;
        }
        while (1)
        {
                std::cout << "Enter index (8 to quit) : ";
                std::getline(std::cin, index);
                if (find_index(index) == 8)
                        break ;
                if (find_index(index) < 0 || find_index(index) >= nbr_contact)
                        std::cout << "Index invalid" << std::endl;
                else
                {
                        std::cout << std::endl;
                        contacts[find_index(index)].get_all_info(find_index(index));
                        break ;
                }
        }
}

void    PhoneBook::get_info(int index) const
{
        contacts[index].get_all_info(index);
}