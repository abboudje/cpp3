/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 07:01:40 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 07:01:41 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
    _hitPoints = FragTrap::_hitPoints;       // 100
    _energyPoints = ScavTrap::_energyPoints; // 50
    _attackDamage = FragTrap::_attackDamage; // 30

    std::cout << "DiamondTrap " << _name << " constructed (default)" << std::endl;
}

// Constructor with name parameter
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
    _hitPoints = FragTrap::_hitPoints;       // 100
    _energyPoints = ScavTrap::_energyPoints; // 50
    _attackDamage = FragTrap::_attackDamage; // 30

    std::cout << "DiamondTrap " << _name << " constructed" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name)
{
    *this = other;
    std::cout << "DiamondTrap " << _name << " copied" << std::endl;
}

// Assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " destroyed" << std::endl;
}

// Use ScavTrap attack
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

// Special method whoAmI
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}