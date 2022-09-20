//
// Created by yuumo on 2022/08/02.
//

#include "ClapTrap.hpp"

void    printStatus(ClapTrap const &clapTrap) {
    std::cout << "**************************************" << std::endl;
    std::cout << "Name         : " << clapTrap.getName() << std::endl;
    std::cout << "Hit point    : " << clapTrap.getHitPoints() << std::endl;
    std::cout << "Energy point : " << clapTrap.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << clapTrap.getAttackDamage() << std::endl;
    std::cout << "**************************************" << std::endl;
}

int	main() {
    {
        ClapTrap Alice("Alice");        // constructor
        ClapTrap NN;                    // default constructor
        ClapTrap Alice_CLONE(Alice);    // copy constructor

        printStatus(Alice);
        printStatus(NN);
        printStatus(Alice_CLONE);

        Alice.attack("Bob");

        Alice.takeDamage(0);
        Alice.takeDamage(1);
        Alice.takeDamage(2);

        printStatus(Alice);

        Alice.beRepaired(0);
        Alice.beRepaired(1);
        Alice.beRepaired(2);

        printStatus(Alice);
    }
    {
        ClapTrap Alice("Alice");

        printStatus(Alice);

        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");
        Alice.attack("Bob");

        printStatus(Alice);

        Alice.attack("Bob");

        printStatus(Alice);
    }
    {
        ClapTrap Alice("Alice");

        printStatus(Alice);

        Alice.beRepaired(0);
        Alice.takeDamage(5);
        Alice.beRepaired(2);
        Alice.beRepaired(4);
        Alice.beRepaired(0);
        Alice.beRepaired(0);
        Alice.beRepaired(0);
        Alice.beRepaired(0);
        Alice.beRepaired(0);
        Alice.beRepaired(0);
        Alice.beRepaired(0);

        printStatus(Alice);

        Alice.beRepaired(0);

        printStatus(Alice);
    }
    {
        ClapTrap Alice("Alice");

        Alice.takeDamage(100000);

        printStatus(Alice);

        Alice.beRepaired(100000);

        printStatus(Alice);
    }
}