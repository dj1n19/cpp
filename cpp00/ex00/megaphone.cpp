#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        argv++;
        while (*argv)
        {
            while (**argv)
            {
                std::cout << (char)toupper(**argv);
                (*argv)++;
            }
            argv++;
        }
        std::cout << std::endl;
    }
    return (0);
}