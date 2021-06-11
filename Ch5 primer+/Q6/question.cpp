/*Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.*/

#include <iostream>
#include <string>

using namespace std;

const int no_of_months = 12;
const int no_of_years = 3;

int main()
{
    const string month_name[no_of_months] = {"January", "Feburary", "March", "April", "May", "June", "July", "August", "September",
                                             "October", "November", "December"};
    string report[no_of_years][no_of_months];
    int total_sells[no_of_years] = {0, 0, 0};
    cout << "Enter The no of books selled for each month" << endl;
    for (int i = 0; i < no_of_years; i++)
    {
        int books_selled = 0;
        cout << "For " << i + 1 << "th Year" << endl;
        int j = 0;
        while (j < no_of_months)
        {
            cout << month_name[j] << ": ";
            cin >> books_selled;
            total_sells[i] += books_selled;
            j++;
        }
    }
    cout << "Total books selled for each year" << endl;
    cout << "1st Year: " << total_sells[0] << endl;
    cout << "2nd Year: " << total_sells[1] << endl;
    cout << "3rd Year: " << total_sells[2] << endl;
    return 0;
}