/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:02:38 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 14:47:02 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	randomChump(std::string name)
{
	Zombie* zomb1 = newZombie(name);
	zomb1->announce();
	delete zomb1;
}
