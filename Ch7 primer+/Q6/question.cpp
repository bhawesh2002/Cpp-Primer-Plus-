/*Write a program that uses the following functions:
Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.
Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.
Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.
The program should use these functions to fill an array, show the array, reverse the
array, show the array, reverse all but the first and last elements of the array, and then
show the array.*/

#include <iostream>

void Fill_array(double values[10]);
void Show_array(double values[10]);
void Reverse_array(double values[10]);

using namespace std;

int main(){
    double my_array[10];
    Fill_array(my_array);
    Show_array(my_array);
    cout << " ---- Reversing Array ----   " << endl;
    Reverse_array(my_array);
}

void Fill_array(double values[10]){
    cout << "Enter 10 values" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> values[i];
    }    
}

void Show_array(double values[10]){
    for (int i = 0; i < 10; i++)
    {
        cout << values[i] << "  ";
    }
    cout << endl;    
}

void Reverse_array(double values[10]){
    for (int i = 10; i > 0; i--)
    {
        values[i];
        cout << values[i - 1] << "  ";
    }    
}