#include "ItemDatabase.hpp"

ItemDatabase::ItemDatabase() {
        
        //универссальные шмотки

        universalItems.push_back(DotaItem("power treads", "boots", 1400));
        universalItems.push_back(DotaItem("phase boots", "boots", 1450));
        universalItems.push_back(DotaItem("boots of travel 2", "boots", 4500));
        universalItems.push_back(DotaItem("boots of bearing", "boots", 4225));
        universalItems.push_back(DotaItem("guardian greaves", "boots", 5050));
        
        universalItems.push_back(DotaItem("swift blink", "mobility", 6800));
        universalItems.push_back(DotaItem("overwhelming blink", "mobility", 6800));
        universalItems.push_back(DotaItem("arcane blink", "mobility", 6800));
        universalItems.push_back(DotaItem("silver edge", "mobility", 5700));
        universalItems.push_back(DotaItem("disperser", "mobility", 6100));

        universalItems.push_back(DotaItem("bloodthorn", "accessory", 6400));
        universalItems.push_back(DotaItem("scythe of vyse", "accessory", 5200));
        universalItems.push_back(DotaItem("gleipnir", "accessory", 4650));
        universalItems.push_back(DotaItem("nullifier", "accessory", 4350));
        universalItems.push_back(DotaItem("abyssal blade", "accessory", 6250));

        //физ билд

        physicalItems.push_back(DotaItem("battle fury", "farm", 3900));
        physicalItems.push_back(DotaItem("mjollnir", "farm", 5500));
        physicalItems.push_back(DotaItem("hand of midas", "farm", 2200));
        physicalItems.push_back(DotaItem("radiance", "farm", 4700));

        physicalItems.push_back(DotaItem("daedalus", "weapon", 5100));
        physicalItems.push_back(DotaItem("revenant's brooch", "weapon", 3300));
        physicalItems.push_back(DotaItem("desolator", "weapon", 3500));
        physicalItems.push_back(DotaItem("divine rapier", "weapon", 5600));
        physicalItems.push_back(DotaItem("monkey king bar", "weapon", 5000));

        physicalItems.push_back(DotaItem("assault cuirass", "armor", 5125));
        physicalItems.push_back(DotaItem("linkens sphere", "armor", 4800));
        physicalItems.push_back(DotaItem("satanic", "armor", 5050));
        physicalItems.push_back(DotaItem("black king bar", "armor", 4050));
        physicalItems.push_back(DotaItem("heart of tarrasque", "armor", 5200));
        physicalItems.push_back(DotaItem("sange and yasha", "armor", 4200));

        //маг билд

        magicalItems.push_back(DotaItem("ethereal blade", "magic", 5200));
        magicalItems.push_back(DotaItem("octarine core", "magic", 4900));
        magicalItems.push_back(DotaItem("dagon", "magic", 7650));
        magicalItems.push_back(DotaItem("parasma", "magic", 5975));
        magicalItems.push_back(DotaItem("refresher orb", "magic", 5000));
        magicalItems.push_back(DotaItem("yasha and kaya", "magic", 4200));
        magicalItems.push_back(DotaItem("meteor hammer", "magic", 2850));
        magicalItems.push_back(DotaItem("khanda", "magic", 5600));

        magicalItems.push_back(DotaItem("shivas guard", "magicArmor", 4500));
        magicalItems.push_back(DotaItem("kaya and sange", "magicArmor", 4200));
        magicalItems.push_back(DotaItem("wind waker", "magicArmor", 6800));
        magicalItems.push_back(DotaItem("black king bar", "magicArmor", 4050));

    }
