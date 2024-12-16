
#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
    std::cout << this->_name << " HumanB object created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " HumanB object destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->_name <<  " attacks with their " << this->_weapon.getType() << std::endl;
}