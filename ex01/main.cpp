/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:31:36 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 16:10:39 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie *zombies = zombieHorde(10, "mkhairou");
	int i = 0;
	while (i < 10)
	{
		zombies[i].announce();
		i++;
	}
	delete [] zombies;
	return 0;
}
