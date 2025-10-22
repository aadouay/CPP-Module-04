#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("NULL"), Hit_points(10),
                    Energy_points(10), Attack_damage(0){
                        std::cout << "the default constractor is called !\n";
                    }

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

    Energy_points--;
    std::cout << "ClapTrap " << name << " attacks " << target 
              << ", causing " << Attack_damage << " points of damage!\n";
}

void    ClapTrap::takeDamage(unsigned int amount){
    if (Hit_points <= 0) {
        std::cout << "ClapTrap " << name << " is already destroyed!\n";
        return;
    }

    if (amount >= (unsigned int)Hit_points)
        Hit_points = 0;
    else
        Hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " damage! Remaining HP: " << Hit_points << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (Hit_points <= 0) {
        std::cout << "ClapTrap " << name << " is already destroyed!\n";
        return;
    }

    if(Energy_points <= 0){
        std::cout << "ClapTrap " << name << " can't be repaired, no energy points left!\n";
        return;
    }

    Energy_points--;
    Hit_points+= amount;
    std::cout << "ClapTrap " << name << "be repaired ! Remaining HP: " << Hit_points << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << "the deconstractor is called!\n";
}