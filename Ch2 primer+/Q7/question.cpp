/*Write a program that asks the user to enter an hour value and a minute value.The
main() function should then pass these two values to a type void function that displays
the two values in the format shown in the following sample run:
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28*/

#include <iostream>

using namespace std;

int time (int,int);

int main(){
    int hours;
    int min;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> min;
    int clock = time(hours,min);
    return 0;
}

int time (int h, int m){
    cout << "Time: " << h << ":" << m << endl;
    return 0;
}