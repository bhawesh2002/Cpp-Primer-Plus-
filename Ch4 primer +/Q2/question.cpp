/*Rewrite Listing 4.4, using the C++ string class instead of char arrays.
Listing 4.4:-
#include <iostream>
int main()
{
using namespace std;
const int ArSize = 20;
char name[ArSize];
char dessert[ArSize];
cout << "Enter your name:\n";
cin.getline(name, ArSize); // reads through newline
cout << "Enter your favorite dessert:\n";
cin.getline(dessert, ArSize);
cout << "I have some delicious " << dessert;
cout << " for you, " << name << ".\n";
return 0;
}*/

#include <iostream>
#include <string>

using namespace std;

int main(){

    string name;
    string dessert;
    cout << "Enter your name: \n";
    getline(cin,name);
    cout << "Enter your favorite dessert: \n";
    getline(cin,dessert);
    cout << "I have some delicious " << dessert << " for you " << name << "." << endl;
    return 0;
}