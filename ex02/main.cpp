/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 04:20:49 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 06:46:41 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
int main()
{
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

	std::cout << "------------\n";
    clap.attack("enemy1");
    clap.takeDamage(5);
    clap.beRepaired(3);
	std::cout << "------------\n";
    scav.attack("enemy2");
    scav.takeDamage(10);
    scav.beRepaired(7);
    scav.guardGate();
	std::cout << "------------\n";
    frag.attack("enemy3");
    frag.takeDamage(15);
    frag.beRepaired(10);
    frag.highFivesGuys();
	std::cout << "------------\n";

    return 0;
}