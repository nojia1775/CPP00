#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

static int      not_num(std::string str)
{
        size_t     i;

        i = 0;
        while (i < str.size())
                if (str[i] > '9' || str[i++] < '0')
                        return (1);
        return (0);
}

static int      isvoid(std::string str)
{
        size_t  i;

        i = 0;
        while (i < str.size())
                if (str[i++] != ' ')
                        return (0);
        return (1);
}

static void     input(std::string& var, int n)
{
        std::string     text[5];

        text[0] = "First name : ";
        text[1] = "Last name : ";
        text[2] = "Nickname : ";
        text[3] = "Number : ";
        text[4] = "Secret : ";
        while (1)
        {
                std::cout << text[n];
                std::getline(std::cin, var);
                if (n == 3 && not_num(var))
                        std::cout << "Invalid number" << std::endl;
                else if (!var.compare("") || isvoid(var))
                        std::cout << "Input can't be empty\n";
                else if (var.compare(""))
                        break ;
        }
}

int     main(void)
{
        PhoneBook       repertoire;
        std::string     cmd;
        std::string     fname;
        std::string     lname;
        std::string     nname;
        std::string     num;
        std::string     secret;

        while (1)
        {
                std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
                std::getline(std::cin, cmd);
                if (!cmd.compare("ADD"))
                {
                        input(fname, 0);
                        input(lname, 1);
                        input(nname, 2);
                        input(num, 3);
                        input(secret, 4);
                        repertoire.new_contact(fname, lname, nname, num, secret);
                        std::cout << std::endl;
                }
                else if (!cmd.compare("SEARCH"))
                        repertoire.all_contacts();
                else if (!cmd.compare("EXIT"))
                        break ;
                else
                        std::cout << "Wrond command" << std::endl;
        }
        return (0);
}