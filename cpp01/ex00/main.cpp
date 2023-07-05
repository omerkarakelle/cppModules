#include "Zombie.hpp"

int main(void)
{
    Zombie *zmb;
    Zombie zmb2("Omer1");

    zmb2.announce();
    randomChump("Omer2");
    zmb = newZombie("Omer3");
    zmb->announce();
    delete zmb;
    return 0;
}
 