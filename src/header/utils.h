//
// Created by Kryotox on 28.05.2022.
//


#include "arrays.h"

#ifndef GAME_UTILS_H
#define GAME_UTILS_H
#endif //GAME_UTILS_H


using namespace std;

int searchValue(string arr[], int size,const string& value)
{
    for(int i=0;i<size;++i)
    {
        if(arr[i]==value)
        {
            return i+1;
        }
    }
    return 0;
}
void outArray(string arr[], int size){
    for (int i = 0; i < size; ++i) {
        cout << " " << arr[i];
    }
}
void help_jn(unsigned short length){
    cout << "Your choices are: " << "\n\n";
    switch (length) {
        case 1: {
            outArray(Yes, 12);
            cout << "\n";
        }
        case 2: {
            outArray(Yes, 12);
            cout << "\n";
            outArray(No, 5);
            cout << "\n";
        }
        case 3: {
            outArray(Yes, 12);
            cout << "\n";
            outArray(No, 5);
            cout << "\n";
            outArray(May, 10);
            cout << "\n\n";
        }
    }
}