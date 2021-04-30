/*Redo Listing 5.4 using a type array object instead of a built-in array and type
long double instead of long long. Find the value of 100!
Listing 5.4 :-
#include <iostream>
const int ArSize = 16; // example of external declaration
int main()
{
long long factorials[ArSize];
factorials[1] = factorials[0] = 1LL;
for (int i = 2; i < ArSize; i++)
factorials[i] = i * factorials[i-1];
for (int i = 0; i < ArSize; i++)
std::cout << i << "! = " << factorials[i] << std::endl;
return 0;
}*/

#include <iostream>

using namespace std;

int main(){
    int number;
    long double factorials[number];
    cout << "Enter a number" << endl;
    cin >> number;
    factorials[0] = factorials[1] = 1LL;
    for(int i = 2; i < number ; i++){
        factorials[i] = i * factorials[i-1];
    } 
    for(int i = 0; i < number; i++){
        cout << i << "! = " << factorials[i] << endl; 
    } 
    return 0;
}