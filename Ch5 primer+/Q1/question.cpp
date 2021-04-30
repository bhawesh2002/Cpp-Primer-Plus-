/*Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a,b;
    cout << "enter two numbers:-\n" << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    int sum = 0;
    sum = sum + a;
    int total = 0;
    for (int count = 0; count <= (b - a) ; count ++){
        total = total + sum;
        sum ++;
        cout << total << endl;
    } 
    return 0;
}