#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    void complain( std::string level )
    {
        (*this.*level)();
    }
    Harl(/* args */);
    ~Harl();
};

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}


#endif
