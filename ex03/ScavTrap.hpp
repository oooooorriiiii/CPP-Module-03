//
// Created by yuumo on 2022/08/02.
//

#ifndef EX03_SCAVTRAP_HPP
#define EX03_SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	virtual ~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& form); // copy constructor
	ScavTrap& operator=(const ScavTrap& scavTrap);

	void 	attack(const std::string& target);
	void 	guardGate();
};


#endif //EX03_SCAVTRAP_HPP
