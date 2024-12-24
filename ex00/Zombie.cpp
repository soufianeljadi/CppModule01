 
#include "Zombie.hpp" 
 
Zombie:: Zombie(std::string name)
{
    this->_name = name;
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
