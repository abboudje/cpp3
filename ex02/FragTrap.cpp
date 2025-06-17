/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 06:34:11 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 06:36:34 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " is born! Ready to high five!\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " is born! Ready to high five!\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " copied!\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is gone... no more high fives.\n";
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << "FragTrap " << _name << " attacks " << target 
                  << ", causing " << _attackDamage << " points of damage!\n";
    }
    else
        std::cout << "FragTrap " << _name << " can't attack!\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " requests a high five! ✋\n";
}
