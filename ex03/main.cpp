/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 04:20:49 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 07:02:39 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Gem");

    diamond.attack("Enemy");
    diamond.whoAmI();

    diamond.takeDamage(20);
    diamond.beRepaired(10);

    return 0;
}