#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& src )
{
    *this = src;
}

Brain& Brain::operator=( const Brain& src )
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &src ) {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}
