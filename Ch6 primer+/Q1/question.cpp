/*Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)*/

#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "Enter a text for analysis. Use \'@\' to terminate the text....." << endl;
    char ch;
    cin.get(ch);

    while (cin.get(ch))
    {
        if (isupper(ch))
        {
            tolower(ch);
        }else if (islower(ch))
        {
            toupper(ch);
        }else if(ch == '@'){
            break;
        }        
    }
    cout << "Altered Sentence : " << ch << endl;
 }