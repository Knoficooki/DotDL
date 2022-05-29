//
// Created by Kryotox on 28.05.2022.
//

#ifndef GAME_INPUT_H
#define GAME_INPUT_H
#include "string"
#include "iostream"
#include "utils.h"

using namespace std;

#endif //GAME_INPUT_H

string Yes[12] {"Yes","yes","YES","y","Y","j","J","ja","Ja","JA","Yea","yea"};
string No[8] {"no","No","NO","Nö","nö","NÖ","N","n"};
string May[10] {"maybe","Maybe","MAYBE","perhaps","Perhaps","PERHAPS","m","M","p","P"};
bool in(const string& answer,bool resume) {
    if (resume){
        if (searchValue(Yes,12,answer) != 0){
            return true;
        }
        if (searchValue(No, 8, answer) != 0){
            string input;
            cout<< "Wanna end this game?";
            cin >> input;
            cout<< "\n";
            if (searchValue(Yes,12,input) != 0) {
                return false;
            }
            return false;
        }
        if (searchValue(May,10,answer) != 0){
            cout<< "Fuck you \n";
            return false;
        }
    }
    return false;
}