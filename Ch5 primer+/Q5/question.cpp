/*You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.*/

#include <iostream>
#include <string>
const int months_in_year = 12;

using namespace std;

int main(){
    int sales[months_in_year];
    string months[months_in_year] = {"January", "Feburary" , "March" , "April" , "May" , "June" , "July" , "August" ,
     "September" , "October" , "November" , "December"};
    int sum = 0;
    cout << "Enter the sales for \'C++ for Fool's\' per month:-" << endl;
    for (int i = 0; i < months_in_year; i++)
    {
        cout << months[i] << ": ";
        cin >> sales[i];
        sum += sales[i];
    }
    cout << "Total sales in a year: " << sum << endl;

    return 0;         
}