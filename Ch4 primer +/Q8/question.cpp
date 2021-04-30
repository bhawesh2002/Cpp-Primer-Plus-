/*Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    struct Pizza{
        string pizza_comp;
        double diameter;
        double weight;
    };

    Pizza * pza = new Pizza;
    cout << "Enter the diameter of pizza: ";
    cin >> pza->diameter;
    cout << "Enter the  weight of pizza: ";
    cin >> pza->weight;
    cout << "Enter  the name of pizza company: ";
    getline(cin,pza->pizza_comp);
    cin.get();
    
    delete(pza);
    
    return 0;
}