/*Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.*/

#include <iostream>
#include <cctype>

const int Arsize = 10;
using namespace std;

int main(){
    double donation_array[Arsize];
    cout << "Enter 10 donation values...." << endl;
    double donation;
    double sum = 0;
    int i = 0;
    cout << "First Value : ";
    cin >> donation;
    while (!isalpha(donation) && i < Arsize)
    {
        donation_array[i] = donation;
        ++i;
        sum += donation;
        if (i < Arsize)
        {
            cout << "Next Value : ";
            cin >> donation;
        }        
    }
    double average = sum/Arsize;
    cout << "Average of donation values = " << average << endl;
    cout << "Donation's greater than average are : \n";
    for (int j = 0; j < Arsize; j++)
    {
        if (donation_array[j] > average)
        {
            cout << donation_array[j] << endl;
        }
         
    }   

    return 0;    
}