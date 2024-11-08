#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>

class   Contact
{
        private:
                std::string     f_name;
                std::string     l_name;
                std::string     n_name;
                std::string     num;
                std::string     secret;
        public:
                                Contact();
                                ~Contact();
                void            create(std::string fname, std::string lname, std::string nname, std::string num, std::string secret);
                void    	get_info(int index) const;
                void    	get_all_info(int index) const;
};

#endif
