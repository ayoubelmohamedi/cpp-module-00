
#include <Phonebook.hpp>

Phonebook::Phonebook(void)
{
	this->_index = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void Phonebook::add_user(Contact info)
{
    this->_contacts[this->_index++ % 8] = info;
} 

void Phonebook::search()
{
	string input;

    if (!this->_contacts[0].get_fname().empty())
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int j = 0; j < 8; j++)
			this->_contacts[j].get_info();
		std::cout << "|-------------------------------------------|" << std::endl;
	}
	if (std::getline(std::cin, input) && input != "" && (input.length() == 1 && input[0] >= '0' && input[0] <= '8'))
    {

		if (!this->_contacts[input[0] - '0'].get_fname().empty())	
			this->_contacts[input[0] - '0'].get_all_info();
		else
        	std::cout << " no output found " << std::endl;
    }
    else
            std::cout << " no output found " << std::endl;
}