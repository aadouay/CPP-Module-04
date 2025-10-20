#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("NULL"), Hit_points(10),
                    Energy_points(10), Attack_damage(0){}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

void    ClapTrap::attack(const std::string& target){
    if (Hit_points <= 0) {
        std::cout << "ClapTrap " << name << " can't attack, no hit points left!\n";
        return;
    }
    if (Energy_points <= 0) {
        std::cout << "ClapTrap " << name << " can't attack, no energy points left!\n";
        return;
    }
    Energy_points = Energy_points - 1;
    std::cout << "ClapTrap " << name << " attacks " << target 
              << ", causing " << Attack_damage << " points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount){

}

void    ClapTrap::beRepaired(unsigned int amount){

}