
#include <Contact.hpp>


Contact::Contact(void)
{ 
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

void Contact::set_fname(std::string str)
{
    this->_info[0] = str;
}

void Contact::set_lname(std::string str)
{
    this->_info[1] = str;
}

void Contact::set_nickname(std::string str)
{
    this->_info[2] = str;
}

void Contact::set_phone(std::string str)
{
    this->_info[3] = str;
}

void Contact::set_secret(std::string str)
{
    this->_info[4] = str;
}

std::string Contact::get_fname(void) const
{
    return  this->_info[0];
}

std::string Contact::get_lname(void) const 
{
    return this->_info[1];
}

std::string Contact::get_nickname(void) const
{
    return this->_info[2];
}

std::string Contact::get_phone(void) const 
{
    return this->_info[3];
}

std::string Contact::get_secret(void) const 
{
    return this->_info[4];
}