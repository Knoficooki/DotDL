#ifndef GAME_ITEMS_H
#define GAME_ITEMS_H
#endif //GAME_ITEMS_H

using namespace std;

int itemCount;
class item{
private:
    string I_name;
    double I_damage;
    unsigned __int8 I_id;
public:
    item(string name, double damage);
    double getDamage() const {return I_damage;}
    string getName() const {return I_name;}
    unsigned __int8 getId() {return I_id;}
};

item::item(string name, double damage) {
    itemCount++;
    I_name = name;
    I_damage = damage;
    I_id = itemCount;
    clog << "[ItemHandler] >> " + I_name + " of class 'item' was created";
}
