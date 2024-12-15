
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

void f(){system("leaks zombie");}

int main()
{
    atexit(f);
    Zombie z("ben 10");
    randomChump("foo");

    Zombie *r = newZombie("alok");
    r->announce();
    
    delete r;
}
