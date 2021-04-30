/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

#include <iostream>

double height_to_meters (double h);
double weight_to_kgs (double w);

using namespace std;

int main(){
    double height;
    double weight;
    cout << "Enter Your Height (in feet and inches): ";
    cin >> height;
    cout << "Enter Your Weight (in pound's): ";
    cin >> weight;
    double BMI = weight_to_kgs(weight)/(height_to_meters(height) * height_to_meters(height));
    cout << "Your BMI is : " << BMI << endl;
    char opt;
    cout << "Enter any option among following" << "\na)Know your Height in meter's        b)Know your Weight in kg's        q)Quit" << endl;
    cin >> opt;
    while (opt != 'q')
    {
        switch (opt)
        {
        case 'a': 
            cout << height_to_meters(height) << endl;
            break;
        
        case 'b':
            cout << weight_to_kgs(weight) << endl;
            break;
        
        default : cout << "Please enter \'a\' , \'b\' or \'q\'" << endl;
            break;
        }
        cout << "Enter any option among following" 
        << "\na)Know your Height in meter's        b)Know your Weight in kg's        q)Quit" << endl;
        cin >> opt;
    }

    cout << "Thanks for input" << "\nTerminating Program >.....>....>...>..>." << endl;
    return 0;    
}

double height_to_meters(double h){
    double to_inches = h * 12;
    double to_meters = to_inches * 0.0254;
    return to_meters;
}

double weight_to_kgs(double w){
    double to_kgs = w/2.2;
    return to_kgs;
} 