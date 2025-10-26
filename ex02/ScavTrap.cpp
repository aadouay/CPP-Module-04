#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
    std::cout << "the default constractor is called !\n";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}
ScavTrap::ScavTrap(const std::string& name):ClapTrap(name){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "the deconstractor is called!\n";
}
