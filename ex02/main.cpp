#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "=== Test 1: Construction / Destruction chaining ===\n";
    {
        FragTrap frag("FR4G");
    } // <== Here, destructors will automatically show the reverse order

    std::cout << "\n=== Test 2: Inherited basic attacks ===\n";
    {
        FragTrap frag("Unit-01");
        frag.attack("a target dummy");  // Inherited from ClapTrap
        frag.takeDamage(30);            // Inherited
        frag.beRepaired(20);            // Inherited
    }

    std::cout << "\n=== Test 3: Custom attributes ===\n";
    {
        FragTrap frag("AttributesTest");
        std::cout << "Expect HP=100, Energy=100, Attack=30" << std::endl;
        frag.attack("TestDummy");
    }

    std::cout << "\n=== Test 4: Special ability (highFivesGuys) ===\n";
    {
        FragTrap frag("FriendlyBot");
        frag.highFivesGuys();  // Unique to FragTrap
    }

    std::cout << "\n=== Test 5: Compare ClapTrap, ScavTrap, and FragTrap ===\n";
    {
        ClapTrap clap("CL4P");
        ScavTrap scav("SC4V");
        FragTrap frag("FR4G");

        std::cout << "\n--- Attacks ---\n";
        clap.attack("enemy1");
        scav.attack("enemy2");
        frag.attack("enemy3");

        std::cout << "\n--- Unique abilities ---\n";
        scav.guardGate();
        frag.highFivesGuys();
    }

    std::cout << "\nAll tests completed.\n";
    return 0;
}
