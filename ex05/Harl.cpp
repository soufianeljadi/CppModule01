
#include "Harl.hpp"

Harl:: Harl()
{
}

Harl::~ Harl()
{
}
void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<< std::endl;
    std::cout << "I really do!" << std::endl<< std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money."<< std::endl;
    std::cout << "You didn\'t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn\'t be asking for more!" << std::endl<< std::endl;
}
void Harl::warning( void )
{

    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free."<< std::endl;
    std::cout << "I\'ve been coming for years whereas you started working here since last month."<< std::endl << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable!"<< std::endl;
    std::cout << "I want to speak to the manager now." << std::endl<< std::endl;

}
void Harl::complain( std::string level )
{
    void (Harl::*ptr_complain[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    int i = 0;

    while(i < 4)
    {
        if (levels[i] == level) 
        {
            (this->*ptr_complain[i])();
            return ; 
        }
        i++;
    }
    std::cerr << "[ UNRECOGNIZED ]"<<std::endl;
    std::cerr  << level << " is an unknown level!" << std::endl<< std::endl;
}

