#ifndef GAME_DOTDL_H
#define GAME_DOTDL_H
#endif //GAME_DOTDL_H

#define exeLog(args) log("ExecutionHandler >> " + args + ";");
#define ILog(args) log("ItemHandler >> " + args + ";");

#include <string>
#include <iostream>
#include <fstream>
#include "header/log.h"
#include "header/arrays.h"
#include "header/utils.h"
#include "header/items.h"
#include "header/io.h"

using namespace std;

int start(){
    START:
    string input;
    cout << "You wanna start the game?";
    cin >> input;cout << "\n";
    if (in(input,true)== 0){
        cout << "Bye\n\n";
        return 0;
    }
    if (in(input,true)==1){
        goto START;
    }
    cout<< "Let's go!\n";

}