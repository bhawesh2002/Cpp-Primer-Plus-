/*Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)*/

#include <iostream>

void numbers(int i , int j);

using namespace std;

int main(){
    int x , y;
    cout << "Enter two number's\n" << "(Entering \'0\' will terminate the program)" << endl;
    cin >> x ;
    while (x != 0)
    {
        cin >> y;
        if (y != 0)
        {
            numbers (x , y);
            cin.clear();
            cout << "Enter two number's\n" << "(Entering \'0\' will terminate the program)" << endl;
            cin >> x;            
        }else{
            break;
        }

    }
    cout << "The number entered is zero." << "\nTerminating program................" << endl;
    return 0;
}

void numbers(int i , int j){
    double harmonic_mean = double (2 * i * j) / (i + j);
    cout << "The harmonic mean of " << i << " and " << j << " is " << harmonic_mean << endl; 
}