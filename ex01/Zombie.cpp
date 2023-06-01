/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:31:39 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 16:03:00 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << ": has died\n";
}
void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	Zombie::name = name;
}
