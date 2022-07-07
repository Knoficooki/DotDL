#ifndef GAME_LOG_H
#define GAME_LOG_H
#endif //GAME_LOG_H

using namespace std;

unsigned long long logCount = 0;
void log(const string& value) {
    ofstream log_file("DotDl_RUN.log",ios_base::out | ios_base::app);
    if (value.empty()){
        ofstream  file("fio.log");
        file << "";
        return;
    }
    log_file << to_string(++logCount) + "\t" +  value + "\n";
}