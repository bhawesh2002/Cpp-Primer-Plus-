/*Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting.*/

#include <iostream>
#include <string>

using namespace std;

struct details
{
    string name;
    int money;
};
int main()
{
    int entries;
    details *donations = new details[entries];
    cout << "Number of entries: ";
    cin >> entries;
    cout << "Enter the follwing details about the doner: " << endl;
    for (int i = 0; i < entries; i++)
    {
        cout << i +1 << "." << "Name: ";
        cin.ignore();
        getline(cin, donations[i].name);
        cout << "  Amount: ";
        cin >> donations[i].money;
    }
    cout << "---------------------Grand Patrons---------------------" << endl;
    for (int i = 0; i < entries; i++)
    {
        if (donations[i].money > 10000)
        {
            cout << i + 1 << ". ";
            cout << "Name: " << donations[i].name << "\n"
                 << "Amount: " << donations[i].money << endl;
        }
    }
    cout << "---------------------Headed Patrons---------------------" << endl;
    for (int i = 0; i < entries; i++)
    {
        if (donations[i].money < 10000)
        {
            cout << i + 1<< ". ";
            cout << "Name: " << donations[i].name << "\n"
                 << "Amount: " << donations[i].money << endl;
        }
    }
}