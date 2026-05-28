#include "BuildGenerator.hpp"
#include "UI.hpp"

int main() {
    BuildGenerator generator;

    int choice;

    do {
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

        UI::pause();

    } while(choice != 5);
}
