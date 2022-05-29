//
// Created by Kryotox on 29.05.2022.
//

#include <string>
#include <iostream>
#include "header/io.h"

#ifndef GAME_DOTDL_H
#define GAME_DOTDL_H
#endif //GAME_DOTDL_H

using namespace std;

void start(){
    Later:
    string input;
    cout << "You wanna start the game?";
    cin >> input;cout << "\n";
    if (in(input,true)== 0){
        cout << "Bye\n\n";
        return;
    }
    if (in(input,true)==1){
        goto Later;
    }
    cout<< "Let's go!\n";

}