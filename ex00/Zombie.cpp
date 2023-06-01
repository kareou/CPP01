/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:34:53 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 14:35:44 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	Zombie::name = name;
}

Zombie::~Zombie()
{
	std::cout << name << ": has died\n";
}
void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
