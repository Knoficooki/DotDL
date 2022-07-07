
#include "DotDl.h"

using namespace std;

int main() {
    time_t timeToDay;
    time(&timeToDay);
    log(asctime(localtime(&timeToDay)));
    exeLog(execOut[0]);
    start();
    return 0;
}