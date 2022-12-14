//
// Created by yuumo on 2022/08/02.
//

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	virtual ~FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& fragTrap);
	FragTrap& operator=(const FragTrap& fragTrap);

	void attack(const std::string& target);
	void highFivesGuys();

};


#endif //EX03_FRAGTRAP_HPP
