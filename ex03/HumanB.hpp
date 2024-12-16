
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon &_weapon;
    public:
        HumanB(std::string name, Weapon &weapon);
        void HumanB::attack();
        ~HumanB();
};

