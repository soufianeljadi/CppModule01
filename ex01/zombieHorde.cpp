
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    Zombie* horde = new Zombie[N];
    std::string str;

    while (++i < N)
    {
        str = i + 1 + 48;
        horde[i].setName(name + str);
    }
    return horde;
}