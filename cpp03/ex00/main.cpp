#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap okarakel("okarakel");
    ClapTrap okarakel2(okarakel);

    okarakel.attack("the sea");
    okarakel.takeDamage(5);
    okarakel.beRepaired(3);
    okarakel.takeDamage(5);
    okarakel.takeDamage(3);

    // ClapTrap okarakel3("okarakel3");
    // for (int i = 0; i < 20; i++)
    // {
    //     std::cout << "i : " << i << std::endl;
    //     okarakel3.attack("the tank");
    // }
    
    return 0;
}