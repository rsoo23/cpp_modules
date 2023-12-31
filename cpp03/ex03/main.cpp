/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:57:37 by rsoo              #+#    #+#             */
/*   Updated: 2023/09/13 23:57:37 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main() {
	DiamondTrap a;
	std::cout << std::endl;
	DiamondTrap b("Jonathan Joestar");
	std::cout << std::endl;

	DiamondTrap c( b );
	std::cout << std::endl;
	DiamondTrap d;
	std::cout << std::endl;
	d = b;
	std::cout << std::endl;

	// b attacks a
    std::cout << a.getName() << ": " << RESET << "HP=" << a.getHP() << ", EP=" << a.getEP() << ", AD=" << a.getAD() << std::endl;
    std::cout << b.getName() << ": " << RESET << "HP=" << b.getHP() << ", EP=" << b.getEP() << ", AD=" << b.getAD() << std::endl;
    std::cout << c.getName() << ": " << RESET << "HP=" << c.getHP() << ", EP=" << c.getEP() << ", AD=" << c.getAD() << std::endl;
    std::cout << d.getName() << ": " << RESET << "HP=" << d.getHP() << ", EP=" << d.getEP() << ", AD=" << d.getAD() << std::endl;

	b.attack(a.getName());
	a.takeDamage(b.getAD());

    std::cout << std::endl;
    std::cout << a.getName() << ": " << RESET << "HP=" << a.getHP() << ", EP=" << a.getEP() << ", AD=" << a.getAD() << std::endl;
    std::cout << b.getName() << ": " << RESET << "HP=" << b.getHP() << ", EP=" << b.getEP() << ", AD=" << b.getAD() << std::endl;

    // b activates highFiveGuys (special function from FragTrap)
    b.highFiveGuys();
    std::cout << std::endl;

    // b activates guardGate (special function from ScavTrap)
    b.guardGate();
    std::cout << std::endl;

    // b activates whoAmI
    b.whoAmI();
    std::cout << std::endl;

    // // b self attacks    
    // b.attack(b.getName());
    // std::cout << std::endl;
}
