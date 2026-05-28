#pragma once

#include "ItemDatabase.hpp"
#include "DotaItem.hpp"

class BuildGenerator {
private:
    ItemDatabase database;

    DotaItem getRandomFromVectorBySlot(
        const std::vector<DotaItem>& items,
        const std::string& slot
    );

    DotaItem getTotallyRandomFromVector(
        const std::vector<DotaItem>& items
    );

    DotaItem getTotallyRandomFromAllItems();

public:
    void generatePhysicalBuild();
    void generateMagicalBuild();
    void generateTotallyRandomBuild();
    void generateRandomBuild();
};
