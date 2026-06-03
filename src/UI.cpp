#include "UI.hpp"
#include <iostream>
#include <limits>

int UI::showMenu() {
    int choice;

    std::cout << "=== Dota 2 build randomizer ===\n";
    std::cout << "1. Generate Physical Build\n";
    std::cout << "2. Generate Magical Build\n";
    std::cout << "3. Generate Random Build (50/50)\n";
    std::cout << "4. Generate Totally Random Build\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose option: ";

    std::cin >> choice;

    return choice;
}

void UI::pause() {
    std::cout << "\nPress Enter to continue...";

    std::cin.ignore(
        std::numeric_limits<std::streamsize>::max(),
        '\n'
    );

    std::cin.get();
}
