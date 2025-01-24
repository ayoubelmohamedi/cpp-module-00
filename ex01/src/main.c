
#include <Phonebook.hpp>

int main(int ac, char* av[])
{
    std::string word;
    PhoneBook phonebook;
    while (1)
    {
        std::cout << "Choose operation (ADD, SEARCH, EXIT)";
        word = std::getline(std::cin, word);
        std::cout << word;
        if (!strcmp(word, "ADD"))
        {
            Contact info = Contact::getdata();
            if (info)
                phonebook.add_user(info);
        }
        else if (!strcmp(word, "SEARCH"))
            phonebook.search();
        else if (!strcmp(word, "EXIT"))
            break;
    } 

    return (0);
}

