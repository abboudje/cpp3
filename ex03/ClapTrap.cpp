/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 03:15:04 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 05:41:29 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been constructed." << std::endl;
}


ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " constructed by default." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "ClapTrap " << _name << " has been copied." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target) 
{
	if (_energyPoints > 0 && _hitPoints > 0) {
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
		          << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has no energy or is dead and can't attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (_hitPoints <= 0) 
	{
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
		return;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount
	          << " points of damage! Remaining HP: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (_energyPoints > 0 && _hitPoints > 0) 
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount
		          << " points! Current HP: " << _hitPoints << std::endl;
	}
	else 
	{
		std::cout << "ClapTrap " << _name << " has no energy or is dead and can't repair!" << std::endl;
	}
}