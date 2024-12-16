
#ifndef HUMANB_HPP

# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanB(std::string name, Weapon &weapon);
        void attack();
        ~HumanB();
};

#endif