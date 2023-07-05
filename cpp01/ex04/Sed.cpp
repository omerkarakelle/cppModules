#include "Sed.hpp"

Sed::Sed(std::string name)
{
    this->inpFile = name;
    this->outFile = name + ".replace";
}

Sed::~Sed(void)
{}

void Sed::replace(std::string s1, std::string s2)
{
    std::string content;
    size_t n;
    std::ifstream ifs(this->inpFile);

    if (!ifs.is_open())
    {
        std::cout << "Error. File could not be opened. Be sure that it exists." << std::endl;
        std::cout << "Usage: ./Sed <filename> <stringToBeReplaced> <stringToReplace>" << std::endl;
        exit(1);
    }
    if (!std::getline(ifs, content, '\0'))
    {
        std::cout << "Error. File is empty." << std::endl;
        ifs.close();
        exit(1);
    }
    n = content.find(s1);
    while (n != std::string::npos)
    {
        content.erase(n, s1.length());
        content.insert(n, s2);
        n = content.find(s1, n + s2.length());
    }
    std::ofstream ofs(this->outFile);
    ofs << content;
    ofs.close();
    ifs.close();
}