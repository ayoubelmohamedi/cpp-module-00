#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP 

#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <Contact.hpp>

class Phonebook
{
private:
    Contact	_contacts[8];
    int     _index;
    

public:
    Phonebook();
    ~Phonebook();

    void add_user(Contact info);
    void search();
};

#endif