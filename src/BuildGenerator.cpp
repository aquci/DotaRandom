#include "BuildGenerator.hpp"
#include "Utils.hpp"

#include <iostream>
#include <vector>
#include <cstdlib>

DotaItem BuildGenerator::getRandomFromVectorBySlot(
    const std::vector<DotaItem>& items,
    const std::string& slot
) {
    std::vector<DotaItem> available;

    for (const auto& item : items) {
        if (item.getSlot() == slot) {
            available.push_back(item);
        }
    }

    if (!available.empty()) {
        return available[std::rand() % available.size()];
    }

    return DotaItem("Empty slot", "none", 0);
}

DotaItem BuildGenerator::getTotallyRandomFromVector(
    const std::vector<DotaItem>& items
) {
    if (!items.empty()) {
        return items[std::rand() % items.size()];
    }

    return DotaItem("empty", "none", 0);
}

DotaItem BuildGenerator::getTotallyRandomFromAllItems() {
    std::vector<DotaItem> allItems;

    allItems.insert(
        allItems.end(),
        database.universalItems.begin(),
        database.universalItems.end()
    );

    allItems.insert(
        allItems.end(),
        database.physicalItems.begin(),
        database.physicalItems.end()
    );

    allItems.insert(
        allItems.end(),
        database.magicalItems.begin(),
        database.magicalItems.end()
    );

    if (!allItems.empty()) {
        return allItems[std::rand() % allItems.size()];
    }

    return DotaItem("empty", "none", 0);
}

void BuildGenerator::generatePhysicalBuild() {
    std::vector<DotaItem> build;
    int totalCost = 0;

    clearScreen();

    std::cout
        << "Dota 2 physical build randomizer\n";

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "boots"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.physicalItems,
            "farm"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.physicalItems,
            "weapon"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.physicalItems,
            "armor"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "mobility"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "accessory"
        )
    );

    build.push_back(
        getTotallyRandomFromVector(
            database.physicalItems
        )
    );

    for (size_t i = 0; i < build.size(); i++) {
        std::cout
            << i + 1
            << ". "
            << build[i].getName()
            << " ("
            << build[i].getCost()
            << " gold)\n";

        totalCost += build[i].getCost();
    }

    std::cout
        << "\nTotal Cost: "
        << totalCost
        << " gold\n";
}

void BuildGenerator::generateMagicalBuild() {
    std::vector<DotaItem> build;
    int totalCost = 0;

    clearScreen();

    std::cout
        << "Dota 2 magical build randomizer\n";

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "boots"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.magicalItems,
            "magic"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.magicalItems,
            "magic"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.magicalItems,
            "magicArmor"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "mobility"
        )
    );

    build.push_back(
        getRandomFromVectorBySlot(
            database.universalItems,
            "accessory"
        )
    );

    build.push_back(
        getTotallyRandomFromVector(
            database.magicalItems
        )
    );

    for (size_t i = 0; i < build.size(); i++) {
        std::cout
            << i + 1
            << ". "
            << build[i].getName()
            << " ("
            << build[i].getCost()
            << " gold)\n";

        totalCost += build[i].getCost();
    }

    std::cout
        << "\nTotal Cost: "
        << totalCost
        << " gold\n";
}

void BuildGenerator::generateTotallyRandomBuild() {
    std::vector<DotaItem> build;
    int totalCost = 0;

    clearScreen();

    std::cout
        << "Dota 2 totally random build\n";

    for (int i = 0; i < 7; i++) {
        build.push_back(
            getTotallyRandomFromAllItems()
        );
    }

    for (size_t i = 0; i < build.size(); i++) {
        std::cout
            << i + 1
            << ". "
            << build[i].getName()
            << " ("
            << build[i].getCost()
            << " gold)\n";

        totalCost += build[i].getCost();
    }

    std::cout
        << "\nTotal Cost: "
        << totalCost
        << " gold\n";
}

void BuildGenerator::generateRandomBuild() {
    if (std::rand() % 2 == 0) {
        generatePhysicalBuild();
    } else {
        generateMagicalBuild();
    }
}
