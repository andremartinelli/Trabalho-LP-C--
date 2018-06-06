#include <cstdio>
#include <fstream>
#include <iostream>

using namespace std;

void le_catalogo(){
    ifstream in("catalogo.txt");

    string str;
    while (getline(in, str)){
        cout << str << endl;
    }
}