//
// Created by yuumo on 2022/08/02.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "[default constructor is called in FragTrap]" << std::endl;
};

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "[constructor is called in FragTrap]" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "[destructor is called in FragTrap]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
	std::cout << "[copy constructor is called in FragTrap]" << std::endl;
	*this = fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap) {
	static_cast<std::string>(_name) = fragTrap._name;
	_hitPoints = fragTrap._hitPoints;
	_energyPoints = fragTrap._energyPoints;
	_attackDamage = fragTrap._attackDamage;
	return *this;
}

void FragTrap::attack(const std::string &target) {
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "FragTrap " << _name << " cannot do anything because "
                  << _name << " lacks hit points or energy points."
                  << std::endl;
        return;
    }
    std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void FragTrap::highFivesGuys() {
	std::cout << "High fives please!" << std::endl;
}