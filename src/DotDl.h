#ifndef GAME_DOTDL_H
#define GAME_DOTDL_H
#endif //GAME_DOTDL_H

#include <string>
#include <iostream>
#include <fstream>
#include "header/log.h"
#include "header/arrays.h"
#include "header/utils.h"
#include "header/items.h"
#include "header/io.h"

#define exeLog(args) log("ExecutionHandler >> " + args + ";");

using namespace std;

void start(){
    START:
    string input;
    cout << "You wanna start the game?";
    cin >> input;cout << "\n";
    if (in(input,true)== 0){
        cout << "Bye\n\n";
    }
    if (in(input,true)==1){
        goto START;
    }
    cout<< "Let's go!\n";

}