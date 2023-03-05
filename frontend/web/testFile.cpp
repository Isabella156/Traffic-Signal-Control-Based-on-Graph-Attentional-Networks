#include <iostream>
#include <stdio.h>
using namespace std;
int  main() {
    const std::string &filename = "roadnetLogFile.json";
    // const std::string &filename = "replayLogFile.txt";
    FILE *fp = fopen(filename.c_str(), "w");
        if (!fp) {
            cout<<"fail"<<endl;
        }else{
            cout<<"success"<<endl;
        }
    return  0;
}
