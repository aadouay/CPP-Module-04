#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap(){
    std::cout << "the ScavTrap default constractor is called !\n";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}
ScavTrap::ScavTrap(const std::string& name):ClapTrap(name){
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;

    return *this;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "the ScavTrap deconstractor is called!\n";
}
