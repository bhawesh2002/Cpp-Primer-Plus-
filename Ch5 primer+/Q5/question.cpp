/*You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.*/

#include <iostream>
#include <string>

const int no_of_months = 12;
using namespace std;

int main()
{
    const string month_name[no_of_months] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September",
                               "October", "November", "December"};
    int selled[no_of_months];
    int total_sells = 0;
    cout << "Enter the number of books selled each month" << endl;
    for (int i = 0; i < no_of_months; i++)
    {
        cout << month_name[i] << " : ";
        cin >> selled[i];
        total_sells += selled[i];
    }

    cout << "Total sales of the year: " << total_sells << endl;
    return 0;
        
}