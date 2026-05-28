#pragma once
#include <vector>
#include "DotaItem.hpp"

class ItemDatabase {
public:
    std::vector<DotaItem> universalItems;
    std::vector<DotaItem> physicalItems;
    std::vector<DotaItem> magicalItems;

    ItemDatabase();
};
