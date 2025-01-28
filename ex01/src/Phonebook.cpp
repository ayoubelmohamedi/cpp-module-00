
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

void Phonebook::add_user(void)
{
	std::string input;
	bool valid;

	valid = false;	
	if (this->_index == 8)
		this->_index = 0;
 	const std::string prompts[] = {
            "Enter a first name: ",
            "Enter " + _contacts[_index % 8].get_fname() + "'s last name: ",
            "Enter " + _contacts[_index % 8].get_fname() + "'s nickname: ",
            "Enter " + _contacts[_index % 8].get_fname() + "'s phone number: ",
            "Enter " + _contacts[_index % 8].get_fname() + "'s darkest secret: "
    };
 	for (int i = 0; i < 5; ++i) {
            while (!std::cin.eof() && input.empty()) {
                std::cout << prompts[i];
                if (std::getline(std::cin, input) && !input.empty()) {
					valid = true;
                    switch (i) {
                        case 0: _contacts[_index % 8].set_fname(input); break;
                        case 1: _contacts[_index % 8].set_lname(input); break;
                        case 2: _contacts[_index % 8].set_nickname(input); break;
                        case 3: _contacts[_index % 8].set_phone(input); break;
                        case 4: _contacts[_index % 8].set_secret(input); break;
                    }
                }
            }
            input = "";
		}
		if (valid)
		{
			std::cout << _contacts[_index % 8].get_fname() << " successfully added to phonebook ["
                  << _index % 8 + 1 << "/8]" << std::endl;
			this->_index++;
		}
} 

void Phonebook::search()
{
	std::string input;

    if (!this->_contacts[0].get_fname().empty())
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		for (int j = 0; j < 8; j++)
			this->_contacts[j].get_info();
		std::cout << "|-------------------------------------------|" << std::endl;
	}
	if (std::getline(std::cin, input) && input != "" && (input.length() == 1 && (input[0] >= '0' && input[0] <= '8')))
    {
		if (input[0] - '0' < 8)
			this->_contacts[input[0] - '0'].get_all_info();
		else
        	std::cout << "Invalid index!" << std::endl;
    }
    else
            std::cout << " no output found " << std::endl;
}