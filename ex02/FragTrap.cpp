#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap(){
    std::cout << "the FragTrap defult constracor is called\n";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name){
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;

    return *this;
}

void    FragTrap::highFivesGuys(){
    std::cout << " high-fives\n";
}

FragTrap::~FragTrap(){
    std::cout << "the FragTrap destractur is called\n";
}