
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

void f(){system("leaks zombie");}

int main()
{
    atexit(f);
    Zombie *z =zombieHorde(9,"zombie ");
    int i = -1;

    while(++i < 9)
        z[i].announce();
        
    delete[] z;
}
