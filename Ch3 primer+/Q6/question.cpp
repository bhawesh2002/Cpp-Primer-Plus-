/*Write a program that asks how many miles you have driven and how many gallons
of gasoline you have used and then reports the miles per gallon your car has gotten.
Or, if you prefer, the program can request distance in kilometers and petrol in liters
and then report the result European style, in liters per 100 kilometers.
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus*/

#include <iostream>

float miles_per_gallon(float m , float g);
float liters_per_kms(float l , float k);

using namespace std;

int main(){
    float liters;
    float kms;
    cout << "Choose one of the following:-\n" << "a)American unit(m/g)\t\te)European unit(l/km)\t\tq)QUit\n" << endl;
    char opt;
    cin >> opt;
    while (opt != 'q')
    {
        switch (opt)
        {
        case 'a': 
            {
                cout << "a)American unit(m/g)" << endl;
                float miles;
                float gallon;
                cout << "Enter mile's driven: ";
                cin >> miles;
                cout << "Enter gallon's of gasoline consumed: ";
                cin >> gallon;
                float american_unit = miles_per_gallon(miles , gallon);
                cout << "Miles Per Gallon = " << american_unit << endl;
            }
            break;
        
        case 'e':
            {
                cout << "e)European unit(l/km)" << endl;
                float liters;
                float kms;
                cout << "Enter liter's of gasoline consumed: ";
                cin >> liters;
                cout << "Enter Kilometer's driven driven: ";
                cin >> kms;
                float european_unit = liters_per_kms(liters,kms);
                cout << "Liters Per Kilometers = " << european_unit << endl;
            }
            break;
        
        default:
            cout << "\nPlease enter \'a\' ,\'e\' or \'q\'\n" << endl;   
            break;
        }
        cout << "Choose one of the following:-\n" << "a)American unit(m/g)\t\te)European unit(l/km)\t\tq)QUit\n" << endl;
        cin >> opt;
    }
    cout << "---------Thank You---------" << endl;
    
    return 0;    

}

float miles_per_gallon(float m , float g){
    float formula = m/g;
    return formula;
}

float liters_per_kms(float l , float k){
    float formula = l/k;
    return formula;
}