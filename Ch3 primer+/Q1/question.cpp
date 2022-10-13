/*Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response. Also use a const symbolic constant to represent
the conversion factor.(1foot = 12inches)*/

#include <iostream>

int main(){
    using namespace std;

    int height;
    const int inches_to_feet = 12;
    cout << "Enter Your Height (In Inches)" << " ___\b\b\b";
    cin >> height;
    int feet = height/12;
    int inches = height%12;
    cout << "Your Height in Feet is " << feet << " and in inches is " << inches << endl;
    return 0;
}