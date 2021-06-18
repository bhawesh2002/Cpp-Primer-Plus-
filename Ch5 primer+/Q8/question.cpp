/*Write a program that uses an array of char and a loop to read one word at a time
until the word "done" is entered.The program should then report the number of
words entered (not counting done).A sample run could look like this:
Enter words (to stop, type the word "done"):
anteater birthday category dumpster
envy finagle geometry done for sure
You entered a total of 7 words.
You should include the cstring header file and use the strcmp() function to
make the comparison test.*/

#include <iostream>
#include <cstring>

const char DONE[] = "done";

using namespace std;

int main()
{
    char text[256] = "";
    int count = 0;
    while (strcmp(text, DONE) != 0)
    {
        cin >> text;
        count++;
    }
    cout << "No of words entered: " << count - 1 << endl;
    return 0;
}