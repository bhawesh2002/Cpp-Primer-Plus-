/*Write a program that asks the user to enter his or her first name and then last
name, and that then constructs, stores, and displays a third string consisting of the
user’s last name followed by a comma, a space, and first name. Use string objects
and methods from the string header file.A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int size = 20;

    cout << "Enter your first name: ";
    char first_name [size];
    cin.getline(first_name,size);
    cout << "Enter your last name: ";
    char last_name [size];
    cin.getline(last_name,size);
    char name[size*2];
    strcpy(name,first_name);
    strcat(name,", ");
    strcat(name,last_name);
    cout << "Here's  the information in a single string: "<< name << endl;
    return 0;
}
