/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:08:22 by mkhairou          #+#    #+#             */
/*   Updated: 2023/06/01 14:29:12 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie* zomb1 = newZombie("zombie1");
	zomb1->announce();
	delete zomb1;
	randomChump("zimbie2");
	return 0;
}
