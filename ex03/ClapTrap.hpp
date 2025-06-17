/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abboudje <abboudje@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 03:14:31 by abboudje          #+#    #+#             */
/*   Updated: 2025/06/17 06:02:33 by abboudje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once 
#include <iostream>
class ClapTrap
{
	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		
		virtual	void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
