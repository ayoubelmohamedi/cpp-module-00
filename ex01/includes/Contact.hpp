#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

class Contact
{
private:
    std::string _name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_num;
    std::string _dark_secret;

public:
    Contact();
    ~Contact();

    get_info(void);
}

#endif