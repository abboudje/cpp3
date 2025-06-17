/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 03:14:31 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 04:22:44 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
#include <iostream>
class ClapTrap
{
	private:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
