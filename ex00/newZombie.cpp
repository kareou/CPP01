/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:59:11 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 14:35:05 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return zombie;
}
