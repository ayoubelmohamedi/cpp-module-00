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
    Contact(string name, string last_name, string nickname, string phone, string secret);
    ~Contact();

    void get_info(void);
    void get_all_info(void);
    string get_fname(void);
    string get_lname(void);
    string get_nickname(void);
};

#endif