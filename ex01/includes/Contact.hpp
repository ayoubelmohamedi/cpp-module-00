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
    std::string _info[5];
   
public:
    Contact();
    ~Contact();

    void get_info(void);
}

#endif