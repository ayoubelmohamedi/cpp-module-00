
#include <Contact.hpp>


Contact::Contact(string name, string last_name, string nickname, string phone, string secret)
{
    this->_info[0] = name;
    this->_info[1] = last_name;
    this->_info[2] = nickname;
    this->_info[3] = phone;
    this->_info[4] = secret;
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::get_info(void)
{
    bool is_big;

    if (!this->get_fname().empty())
    {
        for (int i = 0; i < 3; i++)
        {
            std::cout << "|  " << i << "  ";
            is_big = this->_info[i].length() > 10;
            if (is_big)
                std::cout << "|  " << this->_info[i].substr(0,9) << ". | " << std::endl;
            else
                std::cout << "|  " << this->_info[i] << " | "; 
        }    
    }
}

void Contact::get_all_info(void)
{
    for (int i = 0; i < 8; i++)
        std::cout << this->_info[i]  << std::endl;
}

string Contact::get_fname(void)
{
    return  this->_info[0];
}

string Contact::get_lname(void)
{
    return this->_info[1];
}

string Contact::get_nickname(void)
{
    return this->_info[2];
}

