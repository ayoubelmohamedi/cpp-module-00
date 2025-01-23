
#include <iostream>
#include <iomanip>


int main(int ac, char* av[])
{
    std::string word;
    while (1)
    {
        std::cout << "Choose operation (ADD, SEARCH, EXIT)";
        word = std::getline(std::cin, word);
        std::cout << word;
        if (!strcmp(word, "ADD"))
         
        else if (!strcmp(word, "SEARCH"))

        else if (!strcmp(word, "EXIT"))
            break;
    } 

    return (0);
}

