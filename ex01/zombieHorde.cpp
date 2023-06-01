/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:31:45 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 16:02:12 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie* zombies = new Zombie[N];
	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return(zombies);
}
