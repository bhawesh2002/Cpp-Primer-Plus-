/*Write a program that requests the user to enter the current world population and
the current population of the U.S. (or of some other nation of your choice). Store
the information in variables of type long long. Have the program display the percent
that the U.S. (or other nation’s) population is of the world’s population.The
output should look something like this:
Enter the world's population: 6898758899
Enter the population of the US: 310783781
The population of the US is 4.50492% of the world population.
You can use the Internet to get more recent figures.*/

#include <iostream>

using namespace std;

int main(){

    long long world_pop;
    long long country_pop;
    cout << "Enter the World's present population = " << "_______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> world_pop;
    cout << "Entry your Country Name: ";
    string country_name{};
    cin >> country_name;
    cout << "Enter " << country_name << "'s total population = " << "_______________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> country_pop;
    double percent_pop = (double(country_pop)/double(world_pop) )* 100;
    cout << "The population of " << country_name << " is " << percent_pop << " % " << "of the world's population" << endl;
    return 0;
}