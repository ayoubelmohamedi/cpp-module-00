#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

class Contact
{
private:
    string _name;
    string _last_name;
    string _nickname;
    string _phone_num;
    string _dark_secret;

public:
    Contact();
    ~Contact();

    get_info(void);
}

#endif