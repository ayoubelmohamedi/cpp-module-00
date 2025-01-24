#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>

typedef std::string string; 

class Contact
{
private:
    //first name, last name, nickname, phone number, and darkest secret
    string _info[5];
   
public:
    Contact();
    ~Contact();

    void get_info(void);
}

#endif