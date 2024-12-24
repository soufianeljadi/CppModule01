
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );


int main()
{
    Zombie *z =zombieHorde(4,"zombie ");
    int i = -1;

    while(++i < 4)
        z[i].announce();
        
    delete[] z;
}
