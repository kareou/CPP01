#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::debug( void )
{
    std::cout << "DEBUG" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "INFO" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "WARNING" << std::endl;
}

void    Harl::error( void )
{
    std::cout << "ERROR" << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};
    void    (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (levels)
    {
        if (levels[i] == level)
        {
            break;
        }
        i++;
    }
    (this->*ptr[i])();
}