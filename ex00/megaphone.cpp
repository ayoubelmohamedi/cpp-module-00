
#include <iostream>


int main(int ac, char* av[])
{
    size_t i;
    size_t j;
    char *str;

    i = ac;
    while (i-- >= 2)
    {
        str = av[ac - i]; 
        j = 0;
        while (str[j])
            std::cout << (char)std::toupper(str[j++]);
        std::cout << std::endl;
    }
    if (ac == 1)    
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
