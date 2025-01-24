
#include <Phonebook.hpp>

PhoneBook::PhoneBook(void)
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

PhoneBook::add_user(Contact info)
{
    this->contacts[this->_index++ % 8] = info;
} 

PhoneBook::search()
{
    if (this->_index > 0)
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		this->_contacts[index - 1].get_info();
		std::cout << "|-------------------------------------------|" << std::endl;
	}
}