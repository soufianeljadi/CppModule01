
#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    Zombie z("ben 10");
    randomChump("foo");

    Zombie *r = newZombie("alok");
    r->announce();
    
    delete r;
}
