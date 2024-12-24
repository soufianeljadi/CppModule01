
#include "Zombie.hpp"

static std::string to_string(int index) 
{
    long n = index;
    std::string result;

    if (n == 0)
        return "0";
    while (n > 0) {
        result = char(n % 10 + '0') + result;
        n /= 10;
    }
    return result;
}

Zombie* zombieHorde( int N, std::string name )
{
    int i = -1;
    Zombie* horde = new Zombie[N];
    std::string str;

    while (++i < N)
    {
        str =  to_string(i + 1);;
        horde[i].setName(name + str);
    }
    return horde;
}