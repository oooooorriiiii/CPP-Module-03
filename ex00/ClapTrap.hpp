//
// Created by yuumo on 2022/08/02.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &clapTrap); // Copy constructor
	ClapTrap& operator=(const ClapTrap &clapTrap);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	const std::string&  getName() const;
	unsigned int        getHitPoints() const;
	unsigned int        getEnergyPoints() const;
	unsigned int        getAttackDamage() const;

private:
	const std::string 	_name;
	unsigned int        _hitPoints;
	unsigned int        _energyPoints;
	unsigned int        _attackDamage;
};


#endif //EX00_CLAPTRAP_HPP
