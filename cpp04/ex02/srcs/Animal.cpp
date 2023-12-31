/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:43:07 by rsoo              #+#    #+#             */
/*   Updated: 2023/10/17 10:26:02 by rsoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() {
	this->type = "no type";
	std::cout << GREEN << "Animal Constructed" << RESET << std::endl;
}

Animal::~Animal() {
	std::cout << RED << "Animal Destructed" << RESET << std::endl;
	std::cout << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
