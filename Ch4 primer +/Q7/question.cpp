/*William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
* The name of the pizza company, which can consist of more than one word
* The diameter of the pizza
* The weight of the pizza
Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information, and then the program should display that information.
Use cin (or its methods) and cout.*/

#include <iostream>

using namespace std;

int main(){
    struct pizza_analysis{
        char comp_name[20];
        double diameter;
        double weight;
    };

    pizza_analysis pizza;
    cout << "Enter the name of the pizza company: ";
    cin.getline(pizza.comp_name,20);
    cout << "Enter  the  diameter of pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of pizza: ";
    cin >> pizza.weight;

    return 0; 
}