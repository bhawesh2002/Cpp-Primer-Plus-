/*Write a program that reads keyboard input to the @ symbol and that echoes the
input except for digits, converting each uppercase character to lowercase, and vice
versa. (Don’t forget the cctype family.)*/

#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "Enter a text for analysis. Use \'@\' to terminate the text....." << endl;

    int uppercase = 0;
    int lowercase = 0;
    int chars;
    int i = 0;

    char ch[200];
    char ch2[200];
    cin.get(ch[i]);

    while (ch[i] != '@')
    {
        if (isupper(ch[i]))
        {
            chars++;
            uppercase++;
            tolower(ch[i]);
            ch2[i] = ch[i];
        }else if (islower(ch[i]))
        {
            chars++;
            lowercase++;
            toupper(ch[i]);
            ch2[i] = ch[i];
        }
        ++i;
        cin.get(ch[i]);        
    }
    cout << "Original Sentence : " << ch << endl;
    cout << "Altered Sentence : " << ch2 << endl;
 }