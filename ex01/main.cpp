
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );


int main()
{
    Zombie *z =zombieHorde(10,"salam");
    int i = 0;
    while(i < 9)
    {
        z[i].announce();
        i++;
    }
    
}
