/*Write a C++ program that displays your name and address (or if you value your
* privacy, a fictitious name and address)*/

#include <iostream>

int main(){
    using namespace std;

    string name;
    string address;

    cout << "enter your name and address" << "\n(Press enter after every entry)" << endl;
    cout << "Name:-";
    cin >> name;
    cout << "Address:-";
    cin >> address;

    return 0;
}