/*Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    struct CandyBar{
        string name;
        double weight;
        int calories;
    };

    CandyBar * snack = new CandyBar;
    cout << "Enter the name  of the candy: ";
    getline(cin,snack->name);
    cout << "Enter the weight: ";
    cin >> snack->weight;
    cout << "Enter the number  of calories: ";
    cin >> snack->calories;

    delete(snack);

    return 0;

}