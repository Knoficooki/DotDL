//
// Created by Kryotox on 28.05.2022.
//


#ifndef GAME_IO_H
#define GAME_IO_H
#endif //GAME_IO_H

#include "utils.h"

using namespace std;

int in(const string& answer,bool resume) {
    if (resume){
        if (searchValue(Yes,12,answer)){
            return 2;
        }
        if (searchValue(No, 5, answer)){
            string input;
            cout<< "Wanna end this game?";
            cin >> input;
            cout<< "\n";
            if (searchValue(Yes,12,input)) {
                return 0;
            }
            if (searchValue(No,5,input)){
                return 1;
            }
            if (input == "help") {
                help_jn(2);
                return 1;
            }
        }
        if (searchValue(May,10,answer)){
            cout<< "Fuck you! \n";
            return 0;
        }
        if (answer == "help") {
            help_jn(3);
            return 1;
        }else {
            cout << "Error: Your input is not correct please type 'help' for help!\n\n";
            return 1;
        }
    }
    return false;
}