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
    std::string _info[5];
   
public:
    Contact();
    ~Contact();

    void get_info(void);
    void get_all_info(void);

    string set_fname(std::string str);
    string set_lname(std::string str);
    string set_nickname(std::string str);
    string set_phone(std::string str);
    string set_secret(std::string str);
    string get_fname(void) const;
    string get_lname(void) const;
    string get_nickname(void) const;
    string get_phone(void) const;
    string get_secret(void) const;
};

#endif