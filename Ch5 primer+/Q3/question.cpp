/*Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.*/

#include <iostream>

using namespace std;

int main(){
    int number_entered;
    int sum;
    cout << "this program sum's up the numbers entered by the user." << "(Enter \'0\' to end the  progrram.)" << "\n(Enter a number) :";
    while (number_entered != 0)
    {
        cin >> number_entered;
        sum = number_entered + sum;
        cout << "Sum of number entered: " << sum << endl;
    }
    cout << "You Entered \'0\'" << "\nTerminating Program..........." << endl;
    
    return 0;
        
}
