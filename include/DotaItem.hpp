#pragma once
#include <string>

class DotaItem {
private:
    std::string name;
    std::string slot;
    int cost;

public:
    DotaItem(std::string n,
             std::string s,
             int c = 0);

    std::string getName() const;
    std::string getSlot() const;
    int getCost() const;
};
