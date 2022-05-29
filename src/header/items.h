//
// Created by Kryotox on 28.05.2022.
//

#ifndef GAME_ITEMS_H
#define GAME_ITEMS_H
#endif //GAME_ITEMS_H

#include "string"
using namespace std;

class items{
private:
    int damage{};
public:
    string name;
    items(const string& name,int damage);
    int getDamage() const{
        return damage;
    }
};

items::items(const string& name, int damage) {
}
