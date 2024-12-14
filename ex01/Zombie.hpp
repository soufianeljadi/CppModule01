
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class  Zombie
{
    private:
        std::string _name;
    public:
        // Zombie();
        Zombie(std:: string _name);
        void announce( void );
        ~Zombie();
};


#endif
