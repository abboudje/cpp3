/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 04:20:49 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 05:38:58 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap pikachu("Pikachu");
    ClapTrap salameche("Salamèche");

    pikachu.attack("Salamèche");

    salameche.attack("Pikachu");

    pikachu.beRepaired(5);

    salameche.beRepaired(3);

    pikachu.attack("Salamèche");
    pikachu.attack("Salamèche");
    pikachu.attack("Salamèche");

    salameche.attack("Pikachu");
    salameche.attack("Pikachu");
    salameche.attack("Pikachu");
}
