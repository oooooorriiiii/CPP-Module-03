//
// Created by yuumo on 2022/08/02.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Nomen nescio"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "[default constructor is called]" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "[destructor is called]" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "[constructor is called]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name), _hitPoints(clapTrap._hitPoints), _energyPoints(clapTrap._energyPoints), _attackDamage(clapTrap._attackDamage){
	std::cout << "[copy constructor is called]" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &clapTrap) {
	_name = clapTrap._name;
	_hitPoints = clapTrap._hitPoints;
	_energyPoints = clapTrap._energyPoints;
	_attackDamage = clapTrap._attackDamage;
	return *this;
}

void    ClapTrap::attack(const std::string &target) {
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " cannot do anything because "
                  << _name << " lacks hit points or energy points."
                  << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " took " << amount << " damage!" << std::endl;
	if (_hitPoints < amount) {
		_hitPoints = 0;
	} else {
		_hitPoints -= amount;
	}
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints == 0 || _energyPoints == 0)
    {
        std::cout << "ClapTrap " << _name << " cannot do anything because "
                  << _name << " lacks hit points or energy points."
                  << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " is repaired " << amount << " points." << std::endl;
    if (amount + _hitPoints >= 10) {
        std::cout << "ClapTrap " << _name << "'s hit point are now full." << std::endl;
        _hitPoints = 10;
    } else {
        _hitPoints += amount;
    }
    _energyPoints--;
}

const std::string   ClapTrap::getName() const { return _name; }
unsigned int        ClapTrap::getHitPoints() const { return _hitPoints; }
unsigned int        ClapTrap::getEnergyPoints() const { return _energyPoints; }
unsigned int        ClapTrap::getAttackDamage() const { return _attackDamage; }
