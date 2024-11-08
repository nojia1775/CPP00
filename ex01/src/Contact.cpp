#include "../include/Contact.hpp"

Contact::Contact(void)
{
        //std::cout << "create contact" << std::endl;
        return ;
}

Contact::~Contact(void)
{
        //std::cout << "delete contact" << std::endl;
        return ;
}

void    Contact::create(std::string fname, std::string lname, std::string nname, std::string num, std::string secret)
{
        this->f_name = fname;
        this->l_name = lname;
        this->n_name = nname;
        this->num = num;
        this->secret = secret;
}

static void     aff(std::string str)
{
        int     i;

        i = 0;
        if (str.size() < 10)
        {
                while (i++ < 10 - (int)str.size())
                        std::cout << " ";
                std::cout << str << "|";
        }
        else
        {
                while (i < 9)
                        std::cout << str[i++];
                std::cout << ".|";
        }
}

void    Contact::get_info(int index) const
{
        std::cout << "        " << index << "|";;
        aff(this->f_name);
        aff(this->l_name);
        aff(this->n_name);
        std::cout << std::endl;
}

void    Contact::get_all_info(int index) const
{
        std::cout << "Index : " << index << std::endl;
        std::cout << "First name : " << f_name << std::endl;
        std::cout << "Last name : " << l_name << std::endl;
        std::cout << "Nickname : " << n_name << std::endl;
        std::cout << "Number : " << num << std::endl;
        std::cout << "Secret : " << secret << std::endl;
        std::cout << std::endl;
}