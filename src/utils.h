//
// Created by Kryotox on 28.05.2022.
//

#ifndef GAME_INPUT_H
#define GAME_INPUT_H
#include "string"
#include "iostream"

using namespace std;

#endif //GAME_INPUT_H

int searchValue(string arr[], int size,const string& value)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
            return i+1;
        }
    }
    return 0;
}