#include "DotaItem.hpp"

DotaItem::DotaItem(std::string n,
                   std::string s,
                   int c)
    : name(n), slot(s), cost(c) {}

std::string DotaItem::getName() const {
    return name;
}

std::string DotaItem::getSlot() const {
    return slot;
}

int DotaItem::getCost() const {
    return cost;
}
