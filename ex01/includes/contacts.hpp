#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

class Contact
{
private:
    string name;
    string last_name;
    string nickname;
    string phone_num;
    string dark_secret;

public:
    Contact();
    ~Contact();

    get_info(void);
}

#endif