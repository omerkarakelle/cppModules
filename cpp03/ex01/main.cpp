#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap okarakel( "okarakel" );
    ScavTrap okarakel2( okarakel );

    okarakel.attack( "the air" );
    okarakel.takeDamage( 10 );
    okarakel.beRepaired( 10 );
    okarakel.guardGate();

    // ScavTrap okarakel3("okarakel3");
    // for (int i = 0; i < 55; i++)
    // {
    //     std::cout << "i : " << i << std::endl;
    //     okarakel3.attack("the tank");
    // }

    return 0;
}