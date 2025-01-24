
#include <Contact.hpp>


Contact::Contact()
{
    int i = -1;
    while (++i < 5)
    {
        this->_info
    }
	return;
}

Contact::~Contact(void)
{
	return;
}

Contact::get_info(void)
{
    bool is_big;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "|  " << i << "  ";
        is_big = this->_info[i].length() > 10;
        if (is_big)
            std::cout << "|  " << this->_info[i].substr(0,10) << ". | " << std::endl;
        else
            std::cout << "|  " << this->_info[i] << " | "; 
    }
}
