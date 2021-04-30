//Write a C++ program that asks for a distance in furlongs and converts it to yards.
//(One furlong is 220 yards.)

#include <iostream>
int  furlongs (int);

int main(){
    using namespace std;

    int dis;
    cout << "Furlongs to Yard's Converter" << endl;
    cout << "Enter Distance in Furlongs = ";
    cin >> dis;
    int yards = furlongs(dis);
    cout << "In Yard's = " << yards << endl;
    return 0;
}

int furlongs(int f){
    return f * 220;
}