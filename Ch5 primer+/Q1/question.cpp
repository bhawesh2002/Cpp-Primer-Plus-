/*Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.*/

#include <iostream>

int cumulative_sum(int i , int j);

using namespace std;

int main(){
    int a;
    int b;
    cout << "Enter two numbers: " << "\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if(a > b)
    {
        int swap = b;
        b = a;
        a = swap;
        cout << "Swapping numbers..." << endl;
        cout << "a = " << a << "\nb = " << b << endl;
    }
    int sum_of_numbers = cumulative_sum(a , b);
    cout << "sum of numbers between and including " << a << " & " << b << " is " << sum_of_numbers << endl;
    return 0; 
}

int cumulative_sum(int i , int j){
    int sum = 0;
    int swap;
    while (i <= j)
    {
        sum += i;
        i++;
    }
    return sum;    
}