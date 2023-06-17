#include "Harl.hpp"

Harl::Harl()
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

void    Harl::announce(std::string level)
{
    std::string levels[4]= {"debug", "info", "warning", "error"};

    int i = 0;
    int valid = -1;

    while (i < 4)
    {
        if (levels[i] == level)
        {
            valid = i;
            break;
        }
        i++;
    }
    switch (valid)
    {
    case 3:
        std::cout << "[ ERROR ]\n";
        Harl::error();
        break;
    case 2:
        std::cout << "[ WARNING ]\n";
        Harl::warning();
        std::cout << "[ ERROR ]\n";
        Harl::error();
        break;
    case 1:
        std::cout << "[ INFO ]\n";
        Harl::info();
        std::cout << "[ WARNING ]\n";
        Harl::warning();
        std::cout << "[ ERROR ]\n";
        Harl::error();
        break;
    case 0:
        std::cout << "[ DEBUG ]\n";
        Harl::debug();
        std::cout << "[ INFO ]\n";
        Harl::info();
        std::cout << "[ WARNING ]\n";
        Harl::warning();
        std::cout << "[ ERROR ]\n";
        Harl::error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
}