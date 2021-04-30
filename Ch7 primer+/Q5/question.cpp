/*Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.*/

#include <iostream>

int factorial(int i);

using namespace std;

int main(){
    int integer;
    cout << "Enter a Integer : ";
    cin >> integer;
    factorial(integer);

}

int factorial(int i){
    int factorial = 0;
    for (int a = 0; a < i; a++)
    {
        if (i == 0)
        {
            factorial = 1;
        }else if(i == 1){
            factorial = 1;
        }
        else{
            factorial = i * (i -1);
        } 
    };
    cout << factorial << endl;
    return factorial;    
}