/*The CandyBar structure contains three members.The first member holds the brand
name of a candy bar.The second member holds the weight (which may have a fractional
part) of the candy bar, and the third member holds the number of calories
(an integer value) in the candy bar.Write a program that declares such a structure
and creates a CandyBar variable called snack, initializing its members to "Mocha
Munch", 2.3, and 350, respectively.The initialization should be part of the declaration
for snack. Finally, the program should display the contents of the snack variable.*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    struct CandyBar
    {
        string brand_name;
        double weight;
        int calories;
    };

    CandyBar snack;
    snack = {"Mocha Munch" , 2.3 , 350};
    cout << "Enter brand  name: " << snack.brand_name << endl;
    cout << "Enter weight: " << snack.weight << endl;
    cout << "Enter calories: " << snack.calories << endl;
    return 0;
    
}