/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

#include <iostream>

float formula(double d , double m , double s);

const int arc_to_seconds = 60;

using namespace std;

int main(){
    double degrees;
    double minutes;
    double seconds;
    cout << "Enter a lattitude in degrees, minutes and seconds:" << endl;
    cout << "First, enter in degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    float conversion = formula(degrees,minutes,seconds);
    cout << degrees << " degrees, " << minutes << " minutes and " << seconds << " seconds = " << conversion << " degrees" << endl;
    
    return 0;

}

float formula(double d , double m , double s){
    double sec_to_degree = m + s/arc_to_seconds;
    double min_to_degree = d + sec_to_degree/arc_to_seconds;
    return min_to_degree;
}