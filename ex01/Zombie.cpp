 
#include "Zombie.hpp" 
 
Zombie:: Zombie(std::string _name)
{
    this->_name = _name;
    std::cout << this->_name<< " zombie object created"<< std::endl;
}

Zombie:: Zombie()
{
    this->_name = "(null)";
    std::cout << this->_name<< " zombie object created"<< std::endl;
}

Zombie::~ Zombie()
{
    std::cout << this->_name << " zombie object destroyed"<< std::endl;
}

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}