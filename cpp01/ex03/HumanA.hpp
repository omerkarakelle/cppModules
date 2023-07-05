#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon & weapon;
    public:
        void attack();
        HumanA(std::string _name, Weapon &wp);
        ~HumanA();
};

#endif