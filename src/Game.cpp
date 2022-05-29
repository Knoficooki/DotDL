#include "iostream"
#include "string"
#include "utils.h"
#include "input.h"
#include "items.h"
using namespace std;

int main() {
    string input;
    cout << "You wanna start the game?";
    cin >> input;
    cout<< "\n";
    bool gameStart = true;
    if (!in(input, gameStart)){
        cout << "Bye\n\n";
        return 0;
    }
    cout<< "Los gehts!\n";
}