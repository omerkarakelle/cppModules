#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][0] == '\0')
        {
            std::cout << "Argument error. ";
            std::cout << "String to be replaced cannot be empty." << std::endl;
            return 1;
        }
        Sed fil(argv[1]);
        fil.replace(argv[2], argv[3]);
    }
    else
    {
        std::cout << "Argument Error. " << std::endl;
        std::cout << "Usage: ./Sed <filename> <stringToBeReplaced> <stringToReplace>" << std::endl;
        return 1;
    }
    return 0;
}