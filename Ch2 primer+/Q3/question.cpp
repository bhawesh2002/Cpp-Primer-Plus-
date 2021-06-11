/*Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining
function, also called twice, should produce the remaining output.*/

#include <iostream>

void line1 ();
void line2 ();

using namespace std;

int main(){
    line1();
    line1();
    line2();
    line2();
    return 0;
}

void line1 () {
    cout << "Three Blind Mice" << endl;
}

void line2 (){
    cout << "See How They Run" << endl;
}