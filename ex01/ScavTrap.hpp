/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 05:53:22 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 06:14:46 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &other);
    ~ScavTrap();

    ScavTrap(std::string name);

    void attack(const std::string &target);

    void guardGate();
};