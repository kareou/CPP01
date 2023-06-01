/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 16:38:32 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 16:38:33 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void    HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}