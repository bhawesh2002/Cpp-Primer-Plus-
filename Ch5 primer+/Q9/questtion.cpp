/*Write a program that matches the description of the program in Programming
Exercise 8, but use a string class object instead of an array. Include the string
header file and use a relational operator to make the comparison test.*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    string text = "";
    int count = 0;
    cout << "Enter some text (Enter\"done\" to terminate" << endl;
    while (text != "done")
    {
        cin >> text;
        count++;
    }
    cout << "No of words entered: " << count - 1 << endl;
    return 0;    
}