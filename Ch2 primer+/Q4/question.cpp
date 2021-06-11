/*Write a program that asks the user to enter his or her age.The program then should
display the age in months:
Enter your age: 29
Your age in months is 384.*/

#include <iostream>

int months(int);                 //declaring a prototype

int main(){
    using namespace std;

    int years;
    cout << "Enter Your Age In Years" << endl;
    cin >> years;
    int inmonths = months(years);
    cout << "Your Age In Months Is " << inmonths << endl;
}

int months (int a){
    return 12 * a;
}