 
#include "Zombie.hpp" 
 
Zombie:: Zombie()
{
    this->_name = "(default)";
    std::cout << this->_name<< " Zombie object created"<< std::endl;
}

Zombie:: Zombie(std::string _name)
{
    this->_name = _name;
    std::cout << this->_name<< " Zombie object created"<< std::endl;
}

Zombie::~ Zombie()
{
    std::cout << this->_name << " Zombie object destroyed"<< std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}