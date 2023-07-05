#include "Zombie.hpp"

int main(void)
{
    Zombie *zmbs;

    zmbs = zombieHorde(10, "Omer");

    for (int i = 0; i < 10; i++)
        zmbs[i].announce();
    delete [] zmbs;
    return 0;
}