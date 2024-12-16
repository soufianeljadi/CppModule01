
#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
    this->_weapon = NULL;
    std::cout << this->_name << " HumanB object created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << this->_name << " HumanB object destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->_name <<  " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon; 
}