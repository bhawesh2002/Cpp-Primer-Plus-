/*The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, initializes
them to values of your choice, and then displays the contents of each structure.*/

#include <iostream>

using namespace std;

int main(){
    struct CandyBar{
        char brand_name [20];
        double weight;
        int calories;
    };

    CandyBar snack;
    cout << "Enter brand namme of candy: ";
    cin.getline(snack.brand_name,20);
    cout << "Enter weight of the candy: ";
    cin >> snack.weight;
    cout << "Enter no of calories in candy: ";
    cin >> snack.calories;
    return 0; 

}