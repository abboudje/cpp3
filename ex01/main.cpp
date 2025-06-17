/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 04:20:49 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 06:09:47 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap pikachu("Pikachu");
    pikachu.attack("Charmander");
    pikachu.takeDamage(3);
    pikachu.beRepaired(5);

    std::cout << "-----\n";

    ScavTrap charizard("Charizard");
    charizard.attack("Bulbasaur");
    charizard.takeDamage(20);
    charizard.beRepaired(15);
    charizard.guardGate();

    return 0;
}