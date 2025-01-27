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

    void set_fname(std::string str);
    void set_lname(std::string str);
    void set_nickname(std::string str);
    void set_phone(std::string str);
    void set_secret(std::string str);
    std::string get_fname(void) const;
    std::string get_lname(void) const;
    std::string get_nickname(void) const;
    std::string get_phone(void) const;
    std::string get_secret(void) const;
};

#endif