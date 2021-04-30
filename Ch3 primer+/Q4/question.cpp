/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/

#include <iostream>

void formula(long long s);

const int hours_in_day = 24;
const int min_in_hour = 60;
const int sec_in_min = 60;

using namespace std;

int main(){
    long long seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    formula(seconds);

    return 0;  
}

void formula(long long s){
    int days = s / (hours_in_day * min_in_hour * sec_in_min);
    int hours = s / (min_in_hour * sec_in_min) % hours_in_day;
    int min = (s/sec_in_min) % min_in_hour;
    int sec = s % sec_in_min;
    cout << s << " seconds = " << days << " days, " << hours << " hours, " << min << " minutes, " << sec << " seconds." << endl;
}