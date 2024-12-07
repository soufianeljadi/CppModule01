 
#include "Zombie.hpp" 
 
Zombie:: Zombie(std::string _name)
{
    this->_name = _name;
    std::cout << this->_name<< " object created"<< std::endl;
}

Zombie::~ Zombie()
{
    std::cout << this->_name << " object destroyed"<< std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
