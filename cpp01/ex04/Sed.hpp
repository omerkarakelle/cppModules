#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <fstream>

class Sed
{
    private:
        std::string inpFile;
        std::string outFile;
    public:
        void replace (std::string s1, std::string s2);
        Sed(std::string name);
        ~Sed(void);
};

#endif