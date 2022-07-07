#ifndef GAME_ITEMS_H
#define GAME_ITEMS_H
#endif //GAME_ITEMS_H

using namespace std;

int itemCount;
class item{
private:
    std::string I_name;
    unsigned __int8 I_id;
    int I_stdDamage;
    double I_damage;
public:
    int level{};
    item(std::string name, int stdDamage);
    int getStdDamage() const {return I_stdDamage;}
    double getIDamage() const {return I_damage;}
    std::string getName() const {return I_name;}
    unsigned __int8 getId() const {return I_id;}
};

item::item(std::string name, int stdDamage) {
    itemCount++;
    I_name = std::move(name);
    I_stdDamage = stdDamage;
    I_id = itemCount;
    I_damage = I_stdDamage * (level/2) + level%2;
    ILog(I_name + " of class item was created. ID:" + to_string(I_id));
}