#include "FragTrap.hpp"

int main( void )
{
    FragTrap okarakel( "okarakel" );
    FragTrap okarakel2( okarakel );

    okarakel.attack( "the sea" );
    okarakel.takeDamage( 10 );
    okarakel.beRepaired( 10 );
    okarakel.highFivesGuys();

    // FragTrap okarakel3("okarakel3");
    // for (int i = 0; i < 105; i++)
    // {
    //     std::cout << "i : " << i << std::endl;
    //     okarakel3.highFivesGuys();
    // }

    return 0;
}