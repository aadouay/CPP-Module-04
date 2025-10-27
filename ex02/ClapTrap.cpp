#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default"), Hit_points(10),
                    Energy_points(10), Attack_damage(0){
                        std::cout << "the default ClapTrap constractor is called !\n";
                    }

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = other.name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;

    return *this;
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
    std::cout << "the ClapTrap deconstractor is called!\n";
}