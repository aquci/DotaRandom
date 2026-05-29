#include "BuildGenerator.hpp"
#include "UI.hpp"
#include "Utils.hpp"

int main() {
    BuildGenerator generator;

    int choice;

    do {
        clearScreen();   // ← ВОТ ЭТО ДОБАВИТЬ

        choice = UI::showMenu();

        switch(choice) {
            case 1:
                generator.generatePhysicalBuild();
                break;

            case 2:
                generator.generateMagicalBuild();
                break;

            case 3:
                generator.generateRandomBuild();
                break;

            case 4:
                generator.generateTotallyRandomBuild();
                break;
        }

        if(choice != 5) {
            UI::pause();
        }

    } while(choice != 5);

    return 0;
}
